// OoT3D decomp @ 00269f00  name=FUN_00269f00  size=520

void FUN_00269f00(int param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  float local_54 [2];
  float local_4c;
  float local_44;
  float local_3c;
  float local_34;
  float local_2c;

  uVar1 = DAT_0026a108;
  sVar3 = *(short *)(param_1 + 0x1c);
  if (sVar3 == 0) {
    FUN_00372224(local_54,param_1 + 0x148);
    if (*DAT_0026a11c == 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x2a0) + 8) =
           *(undefined4 *)(DAT_0026a118 + *(short *)(param_1 + 0x282) * 4);
      FUN_003586ec();
    }
    FUN_00373bec(*(undefined4 *)(param_1 + 0x2a0));
    local_64 = uVar1;
    if (*(short *)(param_1 + 0x282) == 3) {
      local_5c = uVar1;
    }
    else {
      local_5c = DAT_0026a120;
    }
    local_58 = uVar1;
    local_60 = local_5c;
    FUN_00358778(*(undefined4 *)(param_1 + 0x29c),0,4,&local_64,0);
    if (*(int *)(param_1 + 0x29c) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x29c) + 0xac) = 1;
      FUN_003721e0(*(undefined4 *)(param_1 + 0x29c),local_54);
      FUN_00372170(*(undefined4 *)(param_1 + 0x29c),0);
      return;
    }
  }
  else if (sVar3 == 1 || sVar3 == 2) {
    *(ushort *)(param_1 + 0x296) = *(short *)(param_1 + 0x296) - 0x14U & 0x1ff;
    FUN_00372224(local_54,param_1 + 0x148);
    sVar3 = FUN_0036e70c(*(undefined4 *)(param_2 + *(short *)(DAT_0026a10c + param_2) * 4 + 0xa54));
    fVar2 = DAT_0026a114;
    fVar5 = (float)VectorSignedToFloat((int)(short)((sVar3 - *(short *)(param_1 + 0xbe)) + -0x8000),
                                       (byte)(in_fpscr >> 0x15) & 3);
    fVar5 = fVar5 * DAT_0026a110;
    if (fVar5 != DAT_0026a114) {
      fVar6 = (float)FUN_003727f0(fVar5);
      fVar5 = (float)FUN_00372674(fVar5);
      fVar7 = local_54[0] * fVar6;
      local_54[0] = local_54[0] * fVar5 - local_4c * fVar6;
      local_4c = fVar7 + local_4c * fVar5;
      fVar7 = local_44 * fVar6;
      local_44 = local_44 * fVar5 - local_3c * fVar6;
      local_3c = fVar7 + local_3c * fVar5;
      fVar7 = local_34 * fVar6;
      local_34 = local_34 * fVar5 - local_2c * fVar6;
      local_2c = fVar7 + local_2c * fVar5;
    }
    iVar4 = FUN_003695f8();
    if (iVar4 == 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x2ac) + 0xc) = uVar1;
    }
    else {
      *(float *)(*(int *)(param_1 + 0x2ac) + 0xc) = fVar2;
    }
    FUN_00373bec(*(undefined4 *)(param_1 + 0x2ac));
    *(undefined1 *)(*(int *)(param_1 + 0x2a4) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x2a4),local_54);
    FUN_00372170(*(undefined4 *)(param_1 + 0x2a4),0);
  }
  return;
}
