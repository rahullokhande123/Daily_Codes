import { BrowserRouter, Route, Routes } from "react-router-dom";
import Layout from "./Layout";
import Home from "./pages/Home";
import About from "./pages/About";
import Service from "./pages/Service";
import Contact from "./pages/Contact";
import Nopage from "./pages/Nopage";

const App=()=>{
  return(
    <>
       <BrowserRouter>
               <Routes>
                   <Route path="/" element={<Layout/>}>
                   <Route index element={<Home/>}/>
                   <Route path="/home" element={<Home/>}/>
                   <Route path="/about" element={<About/>}/>
                   <Route path="/service" element={<Service/>}/>
                   <Route path="/contact" element={<Contact/>}/>
                   <Route path="*" element={<Nopage/>}/>

                   </Route>
               </Routes>
       </BrowserRouter>
    </>
  )
}
export default App;
