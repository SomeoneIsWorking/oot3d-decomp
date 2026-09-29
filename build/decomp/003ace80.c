// OoT3D decomp @ 003ace80  name=FUN_003ace80  size=8

void FUN_003ace80(int param_1,int param_2)

{
  short sVar1;
  ulonglong uVar2;
  float fVar3;
  uint uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 auStack_4c [4];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;

  auStack_4c[0] = *puRam003acfe8;
  auStack_4c[1] = puRam003acfe8[1];
  auStack_4c[2] = puRam003acfe8[2];
  auStack_4c[3] = puRam003acfe8[3];
  uStack_3c = puRam003acfe8[4];
  uStack_38 = puRam003acfe8[5];
  uStack_34 = puRam003acfe8[6];
  uStack_30 = puRam003acfe8[7];
  uStack_2c = puRam003acfe8[8];
  uStack_28 = puRam003acfe8[9];
  uStack_24 = puRam003acfe8[10];
  uStack_20 = puRam003acfe8[0xb];
  uVar4 = (*(ushort *)(param_1 + 0x1c) & 0x7fff) +
          (uint)((ulonglong)*(uint *)(param_2 + 0xf8) * (ulonglong)uRam003acfec >> 0x23);
  uVar2 = (ulonglong)uRam003acff0;
  fVar6 = *(float *)(*(int *)(param_2 + 0x20ac) + 0x28);
  fVar7 = *(float *)(*(int *)(param_2 + 0x20ac) + 0x30);
  fVar8 = (float)FUN_003727f0(auStack_4c
                              [(short)((short)uVar4 + (short)(uint)(uVar4 * uVar2 >> 0x23) * -0xc)])
  ;
  fVar3 = fRam003acff4;
  fVar8 = fVar8 * fRam003acff4;
  fVar9 = (float)FUN_00372674(auStack_4c
                              [(short)((short)uVar4 + (short)(uint)(uVar4 * uVar2 >> 0x23) * -0xc)])
  ;
  if ((*(short *)(param_1 + 0x20a) != 0) &&
     (sVar1 = *(short *)(param_1 + 0x20a) + -1, *(short *)(param_1 + 0x20a) = sVar1, sVar1 != 0)) {
    uVar5 = FUN_003758b0((fVar7 + fVar9 * fVar3) - *(float *)(param_1 + 0x30),
                         (fVar6 + fVar8) - *(float *)(param_1 + 0x28));
    FUN_00375a18(param_1 + 0x36,uVar5,8,4000,1);
    FUN_0036e168(uRam003acffc,uRam003ad004,uRam003ad000,uRam003acffc,param_1 + 0x6c);
    if (*(int *)(param_1 + 0x6c) < iRam003ad008) {
      *(undefined4 *)(param_1 + 0x6c) = uRam003ad00c;
    }
    FUN_0035fb14(param_1);
    return;
  }
  *(undefined4 *)(param_1 + 0x1a4) = uRam003acff8;
  return;
}
