// OoT3D decomp @ 002b072c  name=FUN_002b072c  size=416

void FUN_002b072c(int param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  int iVar8;

  FUN_0037572c(*(undefined4 *)(param_1 + 0x1a8));
  (**(code **)(param_1 + 0x1a4))(param_1,param_2);
  FUN_0036b96c(param_1);
  fVar2 = DAT_002b08d0;
  uVar1 = DAT_002b08cc;
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 500) = *(undefined4 *)(param_1 + 0x1e8);
  *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_1 + 0x1ec);
  *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(param_1 + 0x1f0);
  *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_1 + 0x1dc);
  *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(param_1 + 0x1e0);
  *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_1 + 0x1e4);
  *(undefined4 *)(param_1 + 0x1dc) = *(undefined4 *)(param_1 + 0x1d0);
  *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_1 + 0x1d4);
  *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(param_1 + 0x1d8);
  *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_1 + 0x1c4);
  *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_1 + 0x1c8);
  *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_1 + 0x1cc);
  *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_1 + 0x1b8);
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 0x1bc);
  *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_1 + 0x1c0);
  if (*(short *)(param_1 + 0x1b2) != 0) {
    *(short *)(param_1 + 0x1b2) = *(short *)(param_1 + 0x1b2) + -1;
  }
  if (*(short *)(param_1 + 0x1b4) != 0) {
    *(short *)(param_1 + 0x1b4) = *(short *)(param_1 + 0x1b4) + -1;
  }
  FUN_00376340(fVar2,fVar2,uVar1,param_2,param_1,0x1d);
  fVar6 = DAT_002b08e4;
  fVar5 = DAT_002b08e0;
  fVar4 = DAT_002b08dc;
  iVar3 = DAT_002b08d8;
  if ((DAT_002b08d4 <= (int)*(float *)(param_1 + 0x1a8)) &&
     (*(int *)(param_1 + 0x1a4) != DAT_002b08d8)) {
    *(float *)(param_1 + 0x240) = fVar2 + *(float *)(param_1 + 0x1a8) * DAT_002b08dc;
    *(float *)(param_1 + 0x244) = fVar2 + *(float *)(param_1 + 0x1a8) * fVar4;
    *(float *)(param_1 + 0x248) = fVar6 + *(float *)(param_1 + 0x1a8) * fVar5;
    if (*(short *)(param_1 + 0x1b2) != 0) {
      FUN_0037632c(param_1,param_1 + 0x200);
      FUN_003761f0(param_2,param_2 + 0x5c78,param_1 + 0x200);
      FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x200);
    }
    iVar8 = FUN_0034c3b8(DAT_002b08e8,param_2 + 0xa98,param_1 + 0x28);
    uVar7 = DAT_002b08f0;
    uVar1 = DAT_002b08ec;
    if (iVar8 != 0) {
      *(undefined4 *)(param_1 + 0x68) = DAT_002b08ec;
      *(undefined4 *)(param_1 + 100) = uVar1;
      *(undefined4 *)(param_1 + 0x60) = uVar1;
      FUN_00375bcc(param_1,uVar7);
      *(int *)(param_1 + 0x1a4) = iVar3;
    }
  }
  return;
}
