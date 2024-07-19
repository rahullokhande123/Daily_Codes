import { Link,Outlet } from "react-router-dom";

const Layout=()=>{
  return(
    <>
    <Link style={{color:"white",textDecoration:"none",marginRight:"10px",fontSize:"20px"}} to="home">Home</Link>
    <Link style={{color:"white",textDecoration:"none",marginRight:"10px",fontSize:"20px"}} to="about">About</Link>
    <Link style={{color:"white",textDecoration:"none",marginRight:"10px",fontSize:"20px"}} to="services">Servies</Link>
    <Link style={{color:"white",textDecoration:"none",marginRight:"10px",fontSize:"20px"}} to="placement">Placement</Link>
    <Link style={{color:"white",textDecoration:"none",marginRight:"10px",fontSize:"20px"}} to="gallery">Gallery</Link>
    <Link style={{color:"white",textDecoration:"none",marginRight:"10px",fontSize:"20px"}} to="contact">Contact Us</Link>
    <Outlet/>
    </>
  )
}
export default Layout;