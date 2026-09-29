// OoT3D decomp @ 00442634  name=FUN_00442634  size=464

void FUN_00442634(int param_1)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;

  iVar4 = DAT_0044280c;
  puVar3 = DAT_00442808;
  iVar2 = DAT_00442804;
  cVar1 = *(char *)(param_1 + 0x100);
  bVar8 = cVar1 == '\x03';
  if (bVar8) {
    cVar1 = *(char *)(param_1 + 0x101);
  }
  if (!bVar8 || cVar1 != '\x02') {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  iVar7 = DAT_00442804 + -0x1500;
  iVar6 = iVar7 + (uint)*(ushort *)(DAT_00442804 + 0x92);
  if (((uint)*(byte *)(iVar6 + 0xc0) & DAT_00442808[2]) == 0) {
    FUN_002f8d40(*(undefined4 *)(DAT_0044280c + 0x20),0,10,0x70,0,0);
  }
  else {
    FUN_002f8d40(*(undefined4 *)(DAT_0044280c + 0x20),0,10,0x70,0x2a,0x2a);
  }
  if (((uint)*(byte *)(iVar6 + 0xc0) & puVar3[1]) == 0) {
    FUN_002f8d40(*(undefined4 *)(iVar4 + 0x20),1,10,0x3e,0,0);
  }
  else {
    FUN_002f8d40(*(undefined4 *)(iVar4 + 0x20),1,10,0x3e,0x2a,0x2a);
  }
  if (((uint)*(byte *)(iVar6 + 0xc0) & *puVar3) == 0) {
    FUN_002f8d40(*(undefined4 *)(iVar4 + 0x20),2,10,0xc,0,0);
  }
  else {
    FUN_002f8d40(*(undefined4 *)(iVar4 + 0x20),2,10,0xc,0x2a,0x2a);
  }
  uVar5 = (uint)*(ushort *)(iVar2 + 0x92);
  if ((*(uint *)((uVar5 & 0xfffffffc) + iVar7 + 0xeb4) & *(uint *)(DAT_00442810 + (uVar5 & 3) * 4))
      >> (*(uint *)(DAT_00442814 + (uVar5 & 3) * 4) & 0xff) != (uint)*(byte *)(DAT_00442818 + uVar5)
     ) {
    FUN_002f8d40(*(undefined4 *)(iVar4 + 0x20),3,0x44,8,0,0);
    return;
  }
  FUN_002f8d40(*(undefined4 *)(iVar4 + 0x20),3,0x44,8,0x18,0x18);
  return;
}
