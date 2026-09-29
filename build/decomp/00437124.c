// OoT3D decomp @ 00437124  name=FUN_00437124  size=256

void FUN_00437124(char *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 unaff_r7;
  uint local_20;

  uVar2 = DAT_00437224;
  if (*param_1 != '\0') {
    return;
  }
  *param_1 = '\x01';
  local_20 = param_4;
  FUN_0044a788(uVar2);
  uVar3 = DAT_00437228;
  *(undefined4 *)(param_1 + 4) = DAT_00437228;
  *(undefined4 *)(param_1 + 8) = uVar3;
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  param_1[0x20] = '\0';
  param_1[0x21] = '\0';
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  param_1[2] = '\x01';
  FUN_0044a7cc(uVar2);
  FUN_0044a04c();
  iVar4 = FUN_00435f8c(&local_20,1,0x70001);
  FUN_0044a114();
  if (-1 < iVar4) {
    uVar5 = local_20 & 0xff;
    if (uVar5 == 0) {
      unaff_r7 = 0;
      goto LAB_004371dc;
    }
    if (uVar5 != 1) {
      if (uVar5 == 2) {
        unaff_r7 = 2;
      }
      goto LAB_004371dc;
    }
  }
  unaff_r7 = 1;
LAB_004371dc:
  param_1[3] = (char)unaff_r7;
  FUN_0044a9a4(uVar2,unaff_r7);
  param_1[0x2c] = '\0';
  param_1[0x2d] = '\0';
  param_1[0x2e] = '\0';
  param_1[0x2f] = '\0';
  param_1[0x30] = '\0';
  param_1[0x31] = '\0';
  param_1[0x32] = '\0';
  param_1[0x33] = '\0';
  param_1[0x34] = '\0';
  param_1[0x35] = '\0';
  param_1[0x36] = '\0';
  param_1[0x37] = '\0';
  pcVar6 = param_1 + 0x40;
  param_1[0x38] = '\0';
  param_1[0x39] = '\0';
  param_1[0x3a] = '\0';
  param_1[0x3b] = '\0';
  param_1[0x3c] = '\0';
  param_1[0x3d] = '\0';
  param_1[0x3e] = '\0';
  param_1[0x3f] = '\0';
  do {
    bVar1 = (bool)hasExclusiveAccess(pcVar6);
  } while (!bVar1);
  pcVar6[0] = '\x01';
  pcVar6[1] = '\0';
  pcVar6[2] = '\0';
  pcVar6[3] = '\0';
  param_1[0x44] = '\0';
  param_1[0x45] = '\0';
  param_1[0x46] = '\0';
  param_1[0x47] = '\0';
  param_1[0x48] = '\0';
  param_1[0x49] = '\0';
  param_1[0x4a] = '\0';
  param_1[0x4b] = '\0';
  return;
}
