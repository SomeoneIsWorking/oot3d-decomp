// OoT3D decomp @ 003d05e4  name=FUN_003d05e4  size=160

void FUN_003d05e4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint in_fpscr;
  float fVar3;

  FUN_00375a18(param_1 + 0xbc,0,4,1000,100);
  fVar3 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xbc),(byte)(in_fpscr >> 0x15) & 3);
  fVar3 = fVar3 * DAT_003d0684;
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) + fVar3 * DAT_003d0688;
  FUN_003179d0(param_1,param_2,3);
  uVar1 = DAT_003d0694;
  if (fVar3 == DAT_003d068c) {
    *(undefined4 *)(param_1 + 200) = DAT_003d0690;
    uVar2 = DAT_003d0698;
    *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(param_1 + 0xbc);
    *(undefined4 *)(param_1 + 0x6c) = uVar1;
    *(undefined4 *)(param_1 + 0x498) = uVar2;
  }
  return;
}
