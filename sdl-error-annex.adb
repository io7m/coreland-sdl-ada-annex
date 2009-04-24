package body SDL.Error.Annex is

  procedure Raise_Exception (Message : in String := "") is
  begin
    if Message'Length /= 0 then
      raise SDL_Error with Message & ": " & SDL.Error.Get_Error;
    else
      raise SDL_Error with SDL.Error.Get_Error;
    end if;
  end Raise_Exception;

end SDL.Error.Annex;
