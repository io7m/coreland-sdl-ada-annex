package SDL.Error.Annex is

  SDL_Error : exception;

  --
  -- Raise SDL_Error with SDL.Error.Get_Error and optional message.
  --

  procedure Raise_Exception (Message : in String := "");

end SDL.Error.Annex;
