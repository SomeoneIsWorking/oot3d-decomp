// OoT3D decomp @ 0035fc00  name=FUN_0035fc00  size=632

ushort FUN_0035fc00(int param_1,int param_2,int param_3)

{
  float fVar1;
  int iVar2;
  ushort uVar3;
  float *pfVar4;
  float *pfVar5;
  bool bVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_6c [48];
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;

  fVar1 = DAT_0035fe78;
  *(int *)(param_1 + 0x7c) = param_3;
  local_30 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 10),(byte)(in_fpscr >> 0x15) & 3);
  local_30 = local_30 * fVar1;
  local_2c = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0xc),(byte)(in_fpscr >> 0x15) & 3)
  ;
  local_2c = local_2c * fVar1;
  local_28 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0xe),(byte)(in_fpscr >> 0x15) & 3)
  ;
  local_28 = local_28 * fVar1;
  FUN_00333ed8(local_30 * *(float *)(param_1 + 0x71c) + local_2c * *(float *)(param_1 + 0x720) +
               local_28 * *(float *)(param_1 + 0x724));
  fVar9 = DAT_0035fe80;
  fVar1 = DAT_0035fe7c;
  pfVar5 = (float *)(param_1 + 0x71c);
  local_3c = *(float *)(param_1 + 0x720) * local_28 - *(float *)(param_1 + 0x724) * local_2c;
  local_38 = *(float *)(param_1 + 0x724) * local_30 - *pfVar5 * local_28;
  local_34 = *pfVar5 * local_2c - *(float *)(param_1 + 0x720) * local_30;
  if ((local_3c == DAT_0035fe7c && local_38 == DAT_0035fe7c) && local_34 == DAT_0035fe7c) {
    local_38 = DAT_0035fe80;
  }
  FUN_003625f8(auStack_6c,&local_3c);
  pfVar4 = (float *)(param_1 + 0x728);
  FUN_003735ac(&local_3c,auStack_6c);
  *pfVar4 = local_3c;
  *(float *)(param_1 + 0x72c) = local_38;
  *(float *)(param_1 + 0x730) = local_34;
  iVar2 = DAT_0035fe84;
  *(float *)(param_1 + 0x734) =
       *(float *)(param_1 + 0x72c) * local_28 - *(float *)(param_1 + 0x730) * local_2c;
  *(float *)(param_1 + 0x738) = *(float *)(param_1 + 0x730) * local_30 - *pfVar4 * local_28;
  fVar10 = *pfVar4 * local_2c - *(float *)(param_1 + 0x72c) * local_30;
  *(float *)(param_1 + 0x73c) = fVar10;
  fVar11 = *(float *)(param_1 + 0x734);
  fVar12 = *(float *)(param_1 + 0x738);
  fVar8 = SQRT(fVar11 * fVar11 + fVar12 * fVar12 + fVar10 * fVar10);
  if ((int)fVar8 < iVar2) {
    uVar3 = 0;
  }
  else {
    fVar9 = fVar9 / fVar8;
    *(float *)(param_1 + 0x734) = fVar11 * fVar9;
    *(float *)(param_1 + 0x738) = fVar12 * fVar9;
    *(float *)(param_1 + 0x73c) = fVar10 * fVar9;
    *pfVar5 = local_30;
    *(float *)(param_1 + 0x720) = local_2c;
    *(float *)(param_1 + 0x724) = local_28;
    *(undefined4 *)(param_1 + 0x750) = *(undefined4 *)(param_1 + 0x728);
    *(undefined4 *)(param_1 + 0x760) = *(undefined4 *)(param_1 + 0x72c);
    *(undefined4 *)(param_1 + 0x770) = *(undefined4 *)(param_1 + 0x730);
    *(float *)(param_1 + 0x780) = fVar1;
    *(undefined4 *)(param_1 + 0x754) = *(undefined4 *)(param_1 + 0x71c);
    *(undefined4 *)(param_1 + 0x764) = *(undefined4 *)(param_1 + 0x720);
    *(undefined4 *)(param_1 + 0x774) = *(undefined4 *)(param_1 + 0x724);
    *(float *)(param_1 + 0x784) = fVar1;
    *(undefined4 *)(param_1 + 0x758) = *(undefined4 *)(param_1 + 0x734);
    *(undefined4 *)(param_1 + 0x768) = *(undefined4 *)(param_1 + 0x738);
    *(undefined4 *)(param_1 + 0x778) = *(undefined4 *)(param_1 + 0x73c);
    *(float *)(param_1 + 0x788) = fVar1;
    FUN_003624c8(param_1 + 0x750,param_1 + 0x34,0);
    uVar3 = *(ushort *)(param_2 + 0x104);
    bVar6 = uVar3 == 4;
    if (bVar6) {
      uVar3 = (ushort)*(byte *)(DAT_0035fe88 + 0xe);
    }
    bVar7 = bVar6 && uVar3 == 1;
    if (bVar6 && uVar3 == 1) {
      uVar3 = (ushort)*(byte *)(DAT_0035fe8c + param_2);
      bVar7 = uVar3 == 8;
    }
    if (bVar7) {
      *(undefined2 *)(param_1 + 0x38) = 0;
      return uVar3;
    }
  }
  return uVar3;
}
