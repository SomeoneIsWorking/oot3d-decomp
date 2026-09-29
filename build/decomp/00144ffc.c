// OoT3D decomp @ 00144ffc  name=FUN_00144ffc  size=240

void FUN_00144ffc(int param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;

  if ((*(short *)(param_1 + 0x934) == 0) && (*(int *)(param_1 + 0x98) <= DAT_001450f0)) {
    fVar6 = *(float *)(*(int *)(DAT_001450ec + param_2) + 0x2c);
    fVar4 = *(float *)(param_1 + 0x2c) - fVar6;
    if (((uint)fVar4 <= (uint)DAT_001450f4) && ((int)fVar4 <= DAT_001450f8)) {
      if (*(float *)(param_1 + 0x84) <= fVar6 + DAT_001450fc) {
        FUN_003717ac(param_1 + 0x1a4,DAT_00145100,4);
        uVar5 = DAT_00145104;
        *(short *)(param_1 + 0x92a) = (short)(int)*(float *)(param_1 + 0x1f0);
        uVar3 = DAT_00145108;
        *(undefined2 *)(param_1 + 0x93a) = 0;
        *(undefined4 *)(param_1 + 100) = uVar5;
        *(undefined4 *)(param_1 + 0x6a0) = uVar3;
        return;
      }
    }
  }
  lVar2 = (ulonglong)*(uint *)(param_2 + 0xf8) * (ulonglong)DAT_00145110;
  uVar1 = (uint)((ulonglong)lVar2 >> 0x24);
  uVar5 = DAT_0014510c;
  if (*(uint *)(param_2 + 0xf8) + uVar1 * -0x18 < 0xc) {
    uVar5 = DAT_00145114;
  }
  FUN_0036e168(uVar5,DAT_00145120,DAT_0014511c,DAT_00145118,param_1 + 100,uVar1 * -3,(int)lVar2);
  return;
}
