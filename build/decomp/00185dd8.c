// OoT3D decomp @ 00185dd8  name=FUN_00185dd8  size=452

void FUN_00185dd8(int param_1,int param_2)

{
  uint uVar1;
  short sVar2;
  longlong lVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;

  if ((*(short *)(param_1 + 0x934) != 0) &&
     (sVar2 = *(short *)(param_1 + 0x934) + -1, *(short *)(param_1 + 0x934) = sVar2, sVar2 == 0)) {
    FUN_003717ac(param_1 + 0x1a4,DAT_00185f9c,3);
  }
  if ((*(short *)(param_1 + 0x92a) != 0) &&
     (sVar2 = *(short *)(param_1 + 0x92a) + -1, *(short *)(param_1 + 0x92a) = sVar2, sVar2 == 0)) {
    FUN_003717ac(param_1 + 0x1a4,DAT_00185f9c,3);
  }
  if ((*(short *)(param_1 + 0x934) == 0) && (*(int *)(param_1 + 0x98) <= DAT_00185fa0)) {
    fVar6 = *(float *)(*(int *)(param_2 + 0x20ac) + 0x2c);
    fVar4 = *(float *)(param_1 + 0x2c) - fVar6;
    if (((uint)fVar4 <= (uint)DAT_00185fa4) &&
       (((int)fVar4 <= DAT_00185fa8 && (*(float *)(param_1 + 0x84) <= fVar6 + DAT_00185fac)))) {
      if ((*(short *)(param_1 + 0x93a) == 0) ||
         (sVar2 = *(short *)(param_1 + 0x93a) + -1, *(short *)(param_1 + 0x93a) = sVar2, sVar2 == 0)
         ) {
        FUN_00375bcc(param_1,DAT_00185fb0);
        *(undefined2 *)(param_1 + 0x93a) = 0x60;
      }
      fVar4 = DAT_00185fc0;
      lVar3 = (ulonglong)*(uint *)(param_2 + 0xf8) * (ulonglong)DAT_00185fb8;
      uVar1 = (uint)((ulonglong)lVar3 >> 0x24);
      uVar5 = DAT_00185fb4;
      if (*(uint *)(param_2 + 0xf8) + uVar1 * -0x18 < 0xc) {
        uVar5 = DAT_00185fbc;
      }
      FUN_0036e168(uVar5,DAT_00185fc8,DAT_00185fc4,DAT_00185fc0,param_1 + 100,uVar1 * -3,(int)lVar3)
      ;
      fVar6 = (*(float *)(param_1 + 0x2c) - *(float *)(*(int *)(param_2 + 0x20ac) + 0x2c)) -
              DAT_00185fcc;
      uVar5 = DAT_00185fd0;
      if ((fVar6 < fVar4) || (uVar5 = DAT_00185fd8, DAT_00185fd4 < (int)fVar6)) {
        *(undefined4 *)(param_1 + 100) = uVar5;
      }
      return;
    }
  }
  FUN_00375bcc(param_1,DAT_00185fdc);
  FUN_003717ac(param_1 + 0x1a4,DAT_00185f9c,3);
  *(undefined4 *)(param_1 + 0x6a0) = DAT_00185fe0;
  return;
}
