// OoT3D decomp @ 00402350  name=FUN_00402350  size=68

void FUN_00402350(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;

  bVar4 = *(char *)(param_1 + 0x3a) != '\0';
  cVar1 = '\0';
  if (bVar4) {
    cVar1 = *(char *)(param_1 + 0x38);
  }
  if (bVar4 && cVar1 != '\0') {
    iVar3 = *(int *)(param_1 + 0x34);
    uVar2 = *(uint *)(iVar3 + 4);
    if ((uVar2 & 0xfffffffe) != 0) {
      FUN_0030d614(uVar2 & 0xfffffffe);
      *(undefined4 *)(iVar3 + 4) = 0;
    }
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  return;
}
