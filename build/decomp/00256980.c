// OoT3D decomp @ 00256980  name=FUN_00256980  size=408

void FUN_00256980(undefined4 param_1,uint param_2,float *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  uint in_fpscr;
  float fVar7;

  FUN_00357750(param_2,param_4 + 0x9cc);
  iVar2 = DAT_00256b18;
  if (*(byte *)(param_4 + 0x936) == param_2) {
    uVar1 = param_4 + 0x900;
    if ((*(int *)(param_4 + 0x918) == DAT_00256b18) && (0x1b < *(short *)(param_4 + 0x920))) {
      in_fpscr = in_fpscr & 0xfffffff | (uint)(*(float *)(param_4 + 0x54) == DAT_00256b1c) << 0x1e;
      if (!SUB41(in_fpscr >> 0x1e,0)) {
        fVar7 = DAT_00256b20 / *(float *)(param_4 + 0x54);
        *param_3 = *param_3 * fVar7;
        param_3[4] = param_3[4] * fVar7;
        param_3[8] = param_3[8] * fVar7;
        param_3[1] = param_3[1] * fVar7;
        param_3[5] = param_3[5] * fVar7;
        param_3[9] = param_3[9] * fVar7;
        param_3[2] = param_3[2] * fVar7;
        param_3[6] = param_3[6] * fVar7;
        param_3[10] = param_3[10] * fVar7;
      }
    }
    fVar7 = param_3[1];
    fVar3 = param_3[2];
    fVar4 = param_3[3];
    fVar5 = param_3[4];
    *(float *)(param_4 + 0xa3c) = *param_3;
    *(float *)(param_4 + 0xa40) = fVar7;
    *(float *)(param_4 + 0xa44) = fVar3;
    *(float *)(param_4 + 0xa48) = fVar4;
    *(float *)(param_4 + 0xa4c) = fVar5;
    fVar7 = param_3[6];
    fVar3 = param_3[7];
    fVar4 = param_3[8];
    fVar5 = param_3[9];
    *(float *)(param_4 + 0xa50) = param_3[5];
    *(float *)(param_4 + 0xa54) = fVar7;
    *(float *)(param_4 + 0xa58) = fVar3;
    *(float *)(param_4 + 0xa5c) = fVar4;
    *(float *)(param_4 + 0xa60) = fVar5;
    fVar7 = param_3[0xb];
    *(float *)(param_4 + 0xa64) = param_3[10];
    *(float *)(param_4 + 0xa68) = fVar7;
    bVar6 = *(int *)(param_4 + 0x918) == iVar2;
    if (bVar6) {
      uVar1 = (uint)*(ushort *)(param_4 + 0x920);
    }
    if (bVar6 && uVar1 == 0x29) {
      *(undefined4 *)(param_4 + 0x28) = *(undefined4 *)(param_4 + 0xa48);
      *(undefined4 *)(param_4 + 0x2c) = *(undefined4 *)(param_4 + 0xa58);
      *(undefined4 *)(param_4 + 0x30) = *(undefined4 *)(param_4 + 0xa68);
    }
    fVar7 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_4 + 0x92d),(byte)(in_fpscr >> 0x15) & 3);
    iVar2 = *(int *)(param_4 + 0x9e8);
    FUN_0036f410(*(undefined4 *)(iVar2 + 0x38),*(undefined4 *)(iVar2 + 0x3c),
                 *(undefined4 *)(iVar2 + 0x40),param_4 + 0x95c,*(undefined1 *)(param_4 + 0x92a),
                 *(undefined1 *)(param_4 + 0x92b),*(undefined1 *)(param_4 + 0x92c),
                 (int)(short)(int)(fVar7 * DAT_00256b24),0);
  }
  return;
}
