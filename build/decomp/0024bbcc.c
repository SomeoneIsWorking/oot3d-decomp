// OoT3D decomp @ 0024bbcc  name=FUN_0024bbcc  size=300

void FUN_0024bbcc(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;

  iVar3 = *(int *)(DAT_0024bcf8 + param_2);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x8b8);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x8bc);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x8c0);
  FUN_0037322c(*(undefined4 *)(param_1 + 0x8c4),param_1);
  fVar1 = DAT_0024bcfc;
  if (*(short *)(param_1 + 0x8cc) != 7) {
    uVar2 = *(undefined4 *)(iVar3 + 0x2c);
    uVar4 = *(undefined4 *)(iVar3 + 0x30);
    *(undefined4 *)(param_1 + 0x8f0) = *(undefined4 *)(iVar3 + 0x28);
    *(undefined4 *)(param_1 + 0x8f4) = uVar2;
    *(undefined4 *)(param_1 + 0x8f8) = uVar4;
    if (*(int *)(DAT_0024bd00 + 4) != 0) {
      *(float *)(param_1 + 0x8f4) = *(float *)(iVar3 + 0x2c) - fVar1;
    }
    FUN_0034c664(param_1,param_1 + 0x8d8,2,4);
    *(undefined2 *)(param_1 + 0x8ac) = *(undefined2 *)(param_1 + 0x8e0);
    *(undefined2 *)(param_1 + 0x8ae) = *(undefined2 *)(param_1 + 0x8e2);
    *(undefined2 *)(param_1 + 0x8b0) = *(undefined2 *)(param_1 + 0x8e4);
    FUN_0035fb94(param_1 + 0x8b2,param_1 + 0x8e6);
  }
  *(short *)(param_1 + 0x8ca) = *(short *)(param_1 + 0x8ca) + 1;
  (**(code **)(param_1 + 0x8a8))(param_1,param_2);
  FUN_00376864(param_1);
  FUN_00376340(fVar1,fVar1,DAT_0024bd04,param_2,param_1,0x1d);
  FUN_0037632c(param_1);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x908);
  return;
}
