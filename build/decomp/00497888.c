// OoT3D decomp @ 00497888  name=FUN_00497888  size=104

int FUN_00497888(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;

  cVar1 = *(char *)(param_1 + 3);
  iVar3 = DAT_004978f4;
  if ((((cVar1 != '\0') && (iVar3 = DAT_004978f8, cVar1 != '\x01')) &&
      (iVar3 = DAT_004978f0, cVar1 == '\x02')) &&
     (iVar2 = FUN_002d3cd0(), iVar3 = DAT_004978fc, iVar2 != 0)) {
    iVar3 = DAT_00497900;
  }
  if (*(char *)(param_1 + 2) != '\0') {
    if (*(char *)(param_1 + 2) == '\x01') {
      iVar3 = iVar3 + 10000;
    }
    return iVar3;
  }
  return iVar3 + 0x5dc;
}
