package body SDL.Video.Annex is

  function Data_Size
    (Surface : in Surface_Access_t) return Natural
  is
    Surface_Pitch  : constant Natural := Natural (Surface.all.Pitch);
    Surface_Height : constant Natural := Natural (Surface.all.H);
  begin
    return Surface_Height * Surface_Pitch;
  end Data_Size;

end SDL.Video.Annex;
