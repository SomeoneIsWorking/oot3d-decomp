// OoT3D decomp @ 00284724  name=FUN_00284724  size=332

void FUN_00284724(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  FUN_00370734(param_1 + 0x1a4);
  uVar2 = DAT_00284878;
  fVar1 = DAT_00284870;
  FUN_0036e168(DAT_00284870,DAT_00284878,DAT_00284874,DAT_00284870,param_1 + 0x6c);
  uVar3 = DAT_00284880;
  if (*(short *)(param_1 + 0x1c) == -2) {
    if ((*(ushort *)(param_1 + 0x90) & 0x20) == 0) {
      *(undefined4 *)(param_1 + 0x70) = DAT_0028487c;
    }
    else {
      *(float *)(param_1 + 0x70) = fVar1;
      FUN_0036e168(fVar1,uVar2,uVar3,fVar1,param_1 + 100);
      FUN_0036e168(*(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x88),uVar2,uVar3,fVar1,
                   param_1 + 0x2c);
    }
  }
  if (((*(ushort *)(param_1 + 0x90) & 3) != 0) && (*(float *)(param_1 + 100) <= fVar1)) {
    *(float *)(param_1 + 100) = fVar1;
  }
  if (*(short *)(param_1 + 0x658) < 1) {
    if ((*(int *)(param_1 + 0x98) < DAT_00284884) &&
       (*(int *)(param_1 + 0x9c) <= DAT_00284884 + -0xf60000)) {
      FUN_0036e734(param_1 + 0x1a4,1);
      *(undefined1 *)(param_1 + 0x638) = 10;
      if (((*(ushort *)(param_1 + 0x90) & 3) != 0) ||
         ((*(short *)(param_1 + 0x1c) == -2 && ((*(ushort *)(param_1 + 0x90) & 0x20) != 0)))) {
        if (*(float *)(param_1 + 100) <= fVar1) {
          *(float *)(param_1 + 0x70) = fVar1;
          *(float *)(param_1 + 100) = fVar1;
          *(float *)(param_1 + 0x6c) = fVar1;
        }
      }
      *(undefined4 *)(param_1 + 0x63c) = DAT_00284888;
    }
  }
  else {
    *(short *)(param_1 + 0x658) = *(short *)(param_1 + 0x658) + -1;
  }
  return;
}
