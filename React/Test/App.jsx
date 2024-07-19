

import { BrowserRouter,Routes,Route } from "react-router-dom";
import Layout from "./Layout";
import Home from "./Pages/Home";
import About from "./Pages/About";
import Services from "./Pages/Services";
import Placement from "./Pages/Placement";
import Gallery from "./Pages/Gallery";
import Contact from "./Pages/Contact";

const App=()=>{
    return(
        <>
        <div style={{backgroundColor:"blue",border:"2px solid black",height:"40px"}}>
         <BrowserRouter>
                <Routes>
                     <Route  path="/" element={<Layout/>}>
                     <Route index element={<Home/>}/>
                     <Route path="home" element={<Home/>}/>
                     <Route path="about" element={<About/>}/>
                     <Route path="Services" element={<Services/>}/>
                     <Route path="Placement" element={<Placement/>}/>
                     <Route path="Gallery" element={<Gallery/>}/>
                     <Route path="Contact" element={<Contact/>}/>
                     </Route>
                </Routes>
         </BrowserRouter>
         </div>
        </>
    )
}
export default App;