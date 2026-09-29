// OoT3D decomp @ 0034e124  name=FUN_0034e124  size=152

void FUN_0034e124(float param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;

  iVar2 = DAT_0034e1bc;
  cVar1 = *(char *)(DAT_0034e1bc + 1) + -1;
  *(char *)(DAT_0034e1bc + 1) = cVar1;
  if (cVar1 == '\0') {
    FUN_0037547c(param_3,param_2,4,iVar2 + 100,DAT_0034e1c4,DAT_0034e1c0);
    if (0x40000000 < (int)param_1) {
      param_1 = DAT_0034e1c8;
    }
    fVar3 = (float)VectorSignedToFloat((int)*(char *)(iVar2 + 3) - (int)*(char *)(iVar2 + 2),
                                       (byte)(in_fpscr >> 0x15) & 3);
    *(char *)(iVar2 + 1) = *(char *)(iVar2 + 3) + (char)(int)(fVar3 * (DAT_0034e1cc - param_1));
  }
  return;
}
