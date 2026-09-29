// OoT3D decomp @ 00346850  name=FUN_00346850  size=168

void FUN_00346850(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;

  cVar1 = *(char *)(param_1 + 0x1c1);
  iVar7 = (int)*(float *)(param_1 + 0x30);
  iVar8 = (int)*(float *)(*(int *)(param_1 + 0x128) + 0x30);
  iVar9 = (int)*(float *)(param_1 + 0x28);
  iVar10 = (int)*(float *)(*(int *)(param_1 + 0x128) + 0x28);
  if (cVar1 == '\x03' || cVar1 == '\x01') {
    iVar3 = iVar10;
    iVar4 = iVar9;
    iVar5 = iVar7;
    iVar6 = iVar8;
    if (cVar1 == '\x03') {
      iVar3 = iVar9;
      iVar4 = iVar10;
    }
  }
  else {
    iVar3 = iVar8;
    iVar4 = iVar7;
    iVar5 = iVar9;
    iVar6 = iVar10;
    if (cVar1 == '\0') {
      iVar3 = iVar7;
      iVar4 = iVar8;
    }
  }
  bVar2 = (byte)(1 << *(sbyte *)(param_1 + 0x1c1));
  if (iVar5 == iVar6) {
    iVar3 = iVar4 - iVar3;
  }
  if (iVar5 == iVar6 && iVar3 == 0x3c) {
    bVar2 = bVar2 | *DAT_003468f8;
  }
  else {
    bVar2 = *DAT_003468f8 & ~bVar2;
  }
  *DAT_003468f8 = bVar2;
  return;
}
