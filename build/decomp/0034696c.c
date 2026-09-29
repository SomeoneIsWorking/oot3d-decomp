// OoT3D decomp @ 0034696c  name=FUN_0034696c  size=288

undefined4 FUN_0034696c(int param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;

  puVar1 = DAT_00346a8c;
  uVar7 = param_2;
  if ((*DAT_00346a8c & 1) == 0) {
    uVar8 = FUN_003679b4(DAT_00346a8c);
    uVar7 = (uint)((ulonglong)uVar8 >> 0x20);
    if ((int)uVar8 != 0) {
      FUN_0036788c(DAT_00346a90);
      uVar7 = DAT_00346a98;
    }
  }
  iVar4 = DAT_00346a9c;
  iVar2 = FUN_00495998(DAT_00346a9c + 0x44,uVar7);
  if (iVar2 == 0) {
    uVar3 = *(uint *)(param_1 + 0x18);
    uVar5 = *DAT_00346aa0;
    uVar6 = *DAT_00346aa4;
    uVar7 = uVar6;
    if ((*puVar1 & 1) == 0) {
      uVar8 = FUN_003679b4(DAT_00346a8c);
      uVar7 = (uint)((ulonglong)uVar8 >> 0x20);
      if ((int)uVar8 != 0) {
        FUN_0036788c(DAT_00346a90);
        uVar7 = DAT_00346a98;
      }
    }
    iVar4 = FUN_002c2700(iVar4,uVar7);
    if ((uVar3 & uVar5) != 0 || iVar4 != 4 && (uVar3 & uVar6) != 0) {
      if (param_2 != 0) {
        FUN_0037547c(DAT_00346ab0,0,4,DAT_00346aac,DAT_00346aac,DAT_00346aa8);
      }
      return 1;
    }
  }
  return 0;
}
