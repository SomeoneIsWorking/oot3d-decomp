// OoT3D decomp @ 00283578  name=FUN_00283578  size=528

void FUN_00283578(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  uint in_fpscr;
  int iVar8;
  undefined4 uVar9;

  iVar6 = *(int *)(iRam00283830 + param_2);
  uVar3 = FUN_00367358(param_1,param_1 + 8);
  iVar8 = FUN_0035a4fc(param_1,param_1 + 8);
  uVar1 = uRam00283840;
  uVar9 = uRam0028383c;
  uVar5 = uRam00283838;
  if (iVar8 < iRam00283834) {
    *(undefined4 *)(param_1 + 0x6c) = uRam0028383c;
    iVar8 = FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x16),1,uVar5,0);
    if (iVar8 == 0) {
      if (*(short *)(param_1 + 0x1c) == 2) {
        uVar5 = FUN_0036ae14(param_1 + 0x1e0,2);
        uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00375c08(uRam00283844,uVar5,uVar9,uVar1,param_1 + 0x1e0,2);
        *(undefined1 *)(param_1 + 0x964) = 6;
        *(undefined4 *)(param_1 + 0x950) = uRam00283848;
      }
      else {
        FUN_0034f280(param_1);
      }
    }
  }
  else {
    FUN_00375a18(param_1 + 0xbe,uVar3,1,uRam00283838,0);
  }
  FUN_00375a18(param_1 + 0x956,0,1,100,0);
  FUN_00375a18(param_1 + 0x958,0,1,100,0);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
  FUN_00370734(param_1 + 0x1e0);
  uVar4 = iVar6 + 0x1000;
  bVar7 = (*(uint *)(iVar6 + 0x1710) & uRam0028384c) != 0;
  if (!bVar7) {
    uVar4 = *(uint *)(iVar6 + 0x1714);
  }
  if ((bVar7 || (uVar4 & 0x80) != 0) ||
     (iVar6 = FUN_0035a4fc(iVar6,param_1 + 8), iRam00283850 <= iVar6)) {
    if (0 < *(short *)(param_1 + 0x1c)) {
      if (*(int *)(param_1 + 0x124) == 0) {
        *(undefined1 *)(param_1 + 0x94d) = 0;
      }
      else {
        uVar5 = FUN_0036ae14(param_1 + 0x1e0,5);
        uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00375c08(uRam00283854,uVar9,uVar5,uVar1,param_1 + 0x1e0,5,1);
        *(undefined1 *)(param_1 + 0x964) = 3;
        *(undefined1 *)(param_1 + 0x94d) = 1;
        *(undefined4 *)(param_1 + 0x950) = uRam00283858;
      }
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x1f) = 0;
    FUN_00329154(param_1,param_2);
  }
  puVar2 = puRam00283860;
  uVar5 = uRam0028385c;
  uVar9 = VectorSignedToFloat(*puRam00283860,(byte)(in_fpscr >> 0x15) & 3);
  iVar6 = FUN_003736fc(uVar9,uRam0028385c,param_1 + 0x1e0);
  uVar9 = uRam00283864;
  if (iVar6 == 0) {
    uVar9 = VectorSignedToFloat(puVar2[1],(byte)(in_fpscr >> 0x15) & 3);
    iVar6 = FUN_003736fc(uVar9,uVar5,param_1 + 0x1e0);
    uVar9 = uRam00283864;
    if (iVar6 == 0) {
      uVar4 = *(uint *)(iRam00283868 + param_2);
      if (((uVar4 & 0x5f) != 0) || (uVar4 == puVar2[5])) {
        return;
      }
      puVar2[5] = uVar4;
      uVar9 = uRam0028386c;
    }
  }
  FUN_0037547c(uVar9,param_1 + 0x28,4,DAT_00375c04,DAT_00375c04,DAT_00375c00);
  return;
}
