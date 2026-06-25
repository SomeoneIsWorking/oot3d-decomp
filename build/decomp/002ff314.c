// OoT3D decomp @ 002ff314  name=FUN_002ff314  size=352

void FUN_002ff314(float param_1,int param_2,int param_3,int param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  uint in_fpscr;
  float fVar3;
  
  while( true ) {
    pcVar1 = DAT_002ff474;
    if (param_2 != 0) {
      fVar3 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(DAT_002ff474 + 8) = (*(float *)(DAT_002ff474 + 0x10) - param_1) / fVar3;
      *(int *)(pcVar1 + 0xc) = param_2;
      *(float *)(pcVar1 + 0x14) = param_1;
      *pcVar1 = (char)param_3;
      pcVar1[1] = (char)param_4;
      return;
    }
    *(float *)(DAT_002ff474 + 0x10) = param_1;
    *(undefined4 *)(pcVar1 + 0xc) = 0;
    uVar2 = FUN_0030f0ec();
    FUN_0030f0c0(uVar2,0x4000000);
    FUN_002d3d44(param_1);
    uVar2 = FUN_0030f0ec();
    FUN_0030f0c0(uVar2,0x4000001);
    FUN_002d3d44(param_1);
    uVar2 = FUN_0030f0ec();
    FUN_0030f0c0(uVar2,0x4000002);
    FUN_002d3d44(param_1);
    uVar2 = FUN_0030f0ec();
    FUN_0030f0c0(uVar2,0x4000003);
    FUN_002d3d44(param_1);
    uVar2 = FUN_0030f0ec();
    FUN_0030f0c0(uVar2,DAT_002ff478);
    FUN_002d3d44(param_1);
    if (*pcVar1 == '\0') {
      uVar2 = FUN_0030f0ec();
      FUN_0030f0c0(uVar2,DAT_002ff47c);
      FUN_002d3d44(param_1);
    }
    in_fpscr = in_fpscr & 0xfffffff | (uint)(param_1 == DAT_002ff480) << 0x1e;
    if (!SUB41(in_fpscr >> 0x1e,0)) break;
    if (param_4 == 0) {
      return;
    }
    param_3 = 0;
    param_2 = 0x1e;
    param_4 = param_3;
    param_1 = DAT_002ff484;
  }
  return;
}

