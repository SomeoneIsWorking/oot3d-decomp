// OoT3D decomp @ 002ad7b0  name=FUN_002ad7b0  size=456

void FUN_002ad7b0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  uint in_fpscr;
  float fVar7;
  float local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;

  FUN_0035e240(param_1 + 0x1a8,param_1 + 0x148,0,DAT_002ad978,param_1,0);
  fVar7 = DAT_002ad97c;
  *(undefined4 *)(param_1 + 0x294) = *(undefined4 *)(param_1 + 0x2a0);
  uVar2 = DAT_002ad988;
  fVar1 = DAT_002ad984;
  pcVar3 = DAT_002ad980;
  iVar4 = 0;
  sVar6 = 0;
  *(float *)(param_1 + 0x298) = *(float *)(param_1 + 0x2a4) + fVar7;
  *(undefined4 *)(param_1 + 0x29c) = *(undefined4 *)(param_1 + 0x2a8);
  while( true ) {
    if (*pcVar3 == '\x05') {
      iVar5 = param_1 + iVar4 * 4;
      fVar7 = (float)VectorSignedToFloat((int)*(short *)(pcVar3 + 0x2c),(byte)(in_fpscr >> 0x15) & 3
                                        );
      FUN_003695cc(uVar2,uVar2,uVar2,fVar7 * fVar1,*(undefined4 *)(iVar5 + 0x22c),0,4,2);
      local_48 = *(undefined4 *)(pcVar3 + 4);
      local_38 = *(undefined4 *)(pcVar3 + 8);
      local_28 = *(undefined4 *)(pcVar3 + 0xc);
      local_2c = *(float *)(pcVar3 + 0x34);
      local_30 = local_2c * *(float *)(pcVar3 + 0x40);
      local_54 = local_2c * 1.0;
      local_44 = local_2c * 0.0;
      local_34 = local_2c * 0.0;
      local_50 = local_30 * 0.0;
      local_40 = local_30 * 1.0;
      local_30 = local_30 * 0.0;
      local_4c = local_2c * 0.0;
      local_3c = local_2c * 0.0;
      local_2c = local_2c * 1.0;
      *(undefined1 *)(*(int *)(iVar5 + 0x22c) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(iVar5 + 0x22c),&local_54);
      FUN_00372170(*(undefined4 *)(iVar5 + 0x22c),0);
      iVar4 = iVar4 + 1;
    }
    if (iVar4 == 2) break;
    sVar6 = sVar6 + 1;
    pcVar3 = pcVar3 + 0x4c;
    if (0x95 < sVar6) {
      return;
    }
  }
  return;
}
