// OoT3D decomp @ 003fe898  name=FUN_003fe898  size=364

void FUN_003fe898(undefined4 param_1,int param_2,int param_3)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  uint in_fpscr;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 auStack_88 [48];
  undefined1 auStack_58 [48];

  fVar4 = DAT_003fea10;
  uVar3 = DAT_003fea0c;
  uVar2 = DAT_003fea08;
  sVar1 = DAT_003fea04[1];
  if (param_2 != 1) {
    if (param_2 == 2) {
      uVar8 = *(undefined4 *)(param_3 + 0xc);
      uVar6 = *(undefined4 *)(param_3 + 0x1c);
      uVar7 = *(undefined4 *)(param_3 + 0x2c);
      local_94 = DAT_003fea08;
      local_90 = DAT_003fea08;
      fVar5 = (float)VectorSignedToFloat((int)(short)(*DAT_003fea04 + 0x2555),
                                         (byte)(in_fpscr >> 0x15) & 3);
      local_8c = DAT_003fea0c;
      FUN_003625f8(fVar5 * DAT_003fea10,auStack_88,&local_94);
      local_94 = uVar2;
      local_90 = uVar3;
      local_8c = uVar2;
      fVar5 = (float)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x15) & 3);
      FUN_003625f8(fVar5 * fVar4,auStack_58,&local_94);
      FUN_0036c174(param_3,auStack_88,auStack_58);
      *(undefined4 *)(param_3 + 0xc) = uVar8;
      *(undefined4 *)(param_3 + 0x1c) = uVar6;
      *(undefined4 *)(param_3 + 0x2c) = uVar7;
    }
    return;
  }
  uVar8 = *(undefined4 *)(param_3 + 0xc);
  uVar7 = *(undefined4 *)(param_3 + 0x1c);
  uVar6 = *(undefined4 *)(param_3 + 0x2c);
  local_94 = DAT_003fea08;
  local_90 = DAT_003fea08;
  fVar5 = (float)VectorSignedToFloat((int)(short)(*DAT_003fea04 + 0x2555),
                                     (byte)(in_fpscr >> 0x15) & 3);
  local_8c = DAT_003fea0c;
  FUN_003625f8(fVar5 * DAT_003fea10,auStack_88,&local_94);
  local_94 = uVar2;
  local_90 = uVar3;
  local_8c = uVar2;
  fVar5 = (float)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x15) & 3);
  FUN_003625f8(fVar5 * fVar4,auStack_58,&local_94);
  FUN_0036c174(param_3,auStack_88,auStack_58);
  *(undefined4 *)(param_3 + 0xc) = uVar8;
  *(undefined4 *)(param_3 + 0x1c) = uVar7;
  *(undefined4 *)(param_3 + 0x2c) = uVar6;
  return;
}
