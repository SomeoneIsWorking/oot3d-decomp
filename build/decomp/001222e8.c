// OoT3D decomp @ 001222e8  name=FUN_001222e8  size=220

void FUN_001222e8(int param_1,undefined4 param_2)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;

  fVar1 = DAT_001223c4;
  if (*(char *)(param_1 + 0x203) == '\0') {
    FUN_00375bcc(param_1,DAT_001223c8);
    *(undefined4 *)(param_1 + 0x24c) = DAT_001223cc;
    *(float *)(param_1 + 0x250) = fVar1;
    *(undefined2 *)(param_1 + 0x264) = 0;
    *(undefined1 *)(param_1 + 0x203) = 1;
  }
  else if (*(char *)(param_1 + 0x203) == '\x01') {
    fVar4 = (float)FUN_00363f44(DAT_001223d8,DAT_001223d4,DAT_001223d0,param_1,param_2,
                                param_1 + 0x24c,param_1 + 0x250,param_1 + 0x264,7,0);
    if (fVar4 == fVar1) {
      iVar3 = FUN_0037577c(param_2);
      if (iVar3 == 0) {
        FUN_00367c7c(param_2,DAT_001223dc,0);
      }
      uVar2 = DAT_001223e0;
      *(undefined1 *)(param_1 + 0x200) = 0;
      *(undefined4 *)(param_1 + 0x1fc) = uVar2;
      return;
    }
  }
  return;
}
