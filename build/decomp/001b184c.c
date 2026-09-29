// OoT3D decomp @ 001b184c  name=FUN_001b184c  size=540

void FUN_001b184c(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  float local_64;
  float local_60;
  undefined4 local_5c;
  undefined4 local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34 [3];

  uVar2 = DAT_001b1a70;
  fVar1 = DAT_001b1a6c;
  local_34[0] = *DAT_001b1a68;
  local_34[1] = DAT_001b1a68[1];
  local_34[2] = DAT_001b1a68[2];
  iVar5 = (int)(6 - (uint)*(byte *)(param_1 + 0xb7)) >> 1;
  if (*(byte *)(param_1 + 0xb7) == 0) {
    iVar5 = 2;
  }
  if (*(char *)(param_1 + 0x2dd) != '\0') {
    iVar3 = 0;
    do {
      if (iVar3 == iVar5) {
        FUN_0037266c();
      }
      else {
        FUN_0036932c(*(undefined4 *)(param_1 + 0x11f0),local_34[iVar3]);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
    fVar6 = (float)VectorUnsignedToFloat
                             (*(undefined4 *)(param_1 + 0x2d4),(byte)(in_fpscr >> 0x15) & 3);
    FUN_003695cc(uVar2,uVar2,uVar2,fVar6 * fVar1,*(undefined4 *)(param_1 + 0x11f0),0,4,2);
    *(undefined1 *)(*(int *)(param_1 + 0x11f0) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x11f0),param_1 + 0x148);
    FUN_00372170(*(undefined4 *)(param_1 + 0x11f0),1);
  }
  uVar2 = DAT_001b1a74;
  pcVar4 = (char *)(param_1 + 0x2f0);
  iVar5 = 0;
  do {
    if (*pcVar4 != '\0') {
      iVar3 = param_1 + iVar5 * 0x40;
      fVar6 = (float)VectorSignedToFloat((int)*(short *)(pcVar4 + 0x2c),(byte)(in_fpscr >> 0x15) & 3
                                        );
      FUN_003695cc(uVar2,uVar2,uVar2,fVar6 * fVar1,*(undefined4 *)(iVar3 + 0x32c),0,4,2);
      local_58 = *(undefined4 *)(pcVar4 + 4);
      local_48 = *(undefined4 *)(pcVar4 + 8);
      local_38 = *(undefined4 *)(pcVar4 + 0xc);
      local_5c = 0;
      local_64 = 1.0;
      local_50 = 1.0;
      local_54 = 0.0;
      local_3c = 0x3f800000;
      local_40 = 0.0;
      local_60 = 0.0;
      local_4c = 0;
      local_44 = 0.0;
      FUN_00371fac(&local_64,param_2 + 0x2fc);
      fVar6 = *(float *)(pcVar4 + 0x30);
      local_64 = local_64 * fVar6;
      local_54 = local_54 * fVar6;
      local_44 = local_44 * fVar6;
      local_60 = local_60 * fVar6;
      local_50 = local_50 * fVar6;
      local_40 = local_40 * fVar6;
      *(undefined1 *)(*(int *)(iVar3 + 0x32c) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(iVar3 + 0x32c),&local_64);
      FUN_00372170(*(undefined4 *)(iVar3 + 0x32c),1);
    }
    pcVar4 = pcVar4 + 0x40;
    iVar5 = (int)(short)((short)iVar5 + 1);
  } while (iVar5 < 0x3c);
  return;
}
