// OoT3D decomp @ 003d5a38  name=FUN_003d5a38  size=696

void FUN_003d5a38(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_70 [4];
  float local_6c;
  float local_68;
  float local_5c;
  float local_58;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;

  fVar4 = DAT_003d5cf0;
  local_34 = DAT_003d5cf0;
  local_30 = DAT_003d5cf0;
  local_2c = DAT_003d5cf0;
  local_40 = DAT_003d5cf0;
  local_3c = DAT_003d5cf0;
  local_38 = DAT_003d5cf0;
  FUN_003731e0(param_1 + 0x1a4);
  FUN_0036fc20(DAT_003d5cf8,DAT_003d5cf4,param_1 + 0xcc);
  if (*(short *)(param_1 + 0x63e) != 0) {
    FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x640),1,DAT_003d5cfc,0);
    fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbe) -
                                       (int)*(short *)(param_1 + 0x640),(byte)(in_fpscr >> 0x15) & 3
                                      );
    if ((int)ABS(fVar2) < DAT_003d5d00) {
      *(undefined2 *)(param_1 + 0x63e) = 0;
    }
  }
  fVar7 = DAT_003d5d14;
  fVar2 = DAT_003d5d10;
  fVar6 = *(float *)(param_1 + 0x1e0);
  fVar5 = fVar6 * DAT_003d5d04;
  if ((uint)DAT_003d5d08 < (uint)fVar5) {
    fVar5 = DAT_003d5d0c;
  }
  fVar3 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbe),(byte)(in_fpscr >> 0x15) & 3);
  FUN_003735e8(fVar3 * DAT_003d5d10 * DAT_003d5d14,auStack_70,0);
  fVar7 = fVar5 * fVar2 * fVar7;
  if (fVar7 != fVar4) {
    fVar5 = (float)FUN_003727f0(fVar7);
    fVar3 = (float)FUN_00372674(fVar7);
    fVar4 = local_68 * fVar5;
    local_68 = local_68 * fVar3 - local_6c * fVar5;
    fVar2 = local_58 * fVar5;
    local_58 = local_58 * fVar3 - local_5c * fVar5;
    fVar7 = local_48 * fVar5;
    local_48 = local_48 * fVar3 - local_4c * fVar5;
    local_6c = local_6c * fVar3 + fVar4;
    local_5c = local_5c * fVar3 + fVar2;
    local_4c = local_4c * fVar3 + fVar7;
  }
  local_30 = (float)FUN_003738a8(DAT_003d5d18);
  fVar4 = DAT_003d5d1c;
  local_30 = local_30 + DAT_003d5d1c;
  FUN_003735ac(&local_40,auStack_70,&local_34);
  uVar1 = DAT_003d5d20;
  fVar2 = (float)FUN_003738a8(DAT_003d5d20);
  local_40 = fVar2 + local_40 + *(float *)(param_1 + 0x28);
  fVar2 = (float)FUN_003738a8(uVar1);
  local_3c = fVar2 + local_3c + *(float *)(param_1 + 0x2c);
  fVar4 = (float)FUN_003738a8(fVar4);
  local_38 = fVar4 + local_38 + *(float *)(param_1 + 0x30);
  FUN_00375ed8(param_1,0x400000,0x80,0,8);
  FUN_003580ec(param_2,param_1,&local_40,100,0,0,0xffffffff,1);
  if (((*(float *)(param_1 + 0x654) <= fVar6) && ((*(ushort *)(param_1 + 0x90) & 1) != 0)) &&
     (FUN_00373500(DAT_003d5d2c,DAT_003d5d28,DAT_003d5d24,param_1 + 0xc4),
     DAT_003d5d30 < *(uint *)(param_1 + 0xc4))) {
    FUN_00374444(param_2,param_1,param_1 + 0x28,0xc0);
    FUN_00374428(param_1);
  }
  return;
}
