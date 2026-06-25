// OoT3D decomp @ 0032eb60  name=FUN_0032eb60  size=116

void FUN_0032eb60(uint param_1)

{
  int iVar1;
  
  iVar1 = DAT_0032ebd4;
  if (*(byte *)(DAT_0032ebd4 + 0xe) != param_1) {
    if (param_1 == 0) {
      FUN_0048961c();
    }
    else if (*(byte *)(DAT_0032ebd4 + 0xe) == 0) {
      FUN_0037547c(DAT_0032ebd8,DAT_0032ebe4,4,DAT_0032ebe0,DAT_0032ebe0,DAT_0032ebdc);
    }
  }
  *(char *)(iVar1 + 0xe) = (char)param_1;
  FUN_003478a0(param_1);
  *(char *)(iVar1 + 0x10) = (char)param_1;
  FUN_00347890(param_1);
  return;
}

