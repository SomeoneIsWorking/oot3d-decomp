// OoT3D decomp @ 0011b9e8  name=FUN_0011b9e8  size=356

void FUN_0011b9e8(int param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  float fVar3;

  fVar3 = *(float *)(param_1 + 0x220);
  sVar1 = *(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe);
  if (sVar1 < 0) {
    sVar1 = -sVar1;
  }
  iVar2 = FUN_003731e0(param_1 + 0x1e4);
  if (iVar2 != 0) {
    FUN_0036e734(param_1 + 0x1e4,6);
    FUN_00375bcc(param_1,DAT_0011bb4c);
  }
  if (*(short *)(param_1 + 0x8fa) == 0) {
    *(undefined4 *)(param_1 + 0x6c) = DAT_0011bb54;
    *(undefined2 *)(param_1 + 0x902) = 1;
    FUN_0036f00c(DAT_0011bb5c,DAT_0011bb58,param_2,param_1,param_1 + 0x28,3,100,0xf,0);
    iVar2 = (int)*(float *)(param_1 + 0x220);
    if ((iVar2 != (int)fVar3) && (iVar2 == 2 || iVar2 == 6)) {
      FUN_00375bcc(param_1,DAT_0011bb60);
    }
  }
  else {
    *(short *)(param_1 + 0x8fa) = *(short *)(param_1 + 0x8fa) + -1;
    FUN_00375a18(param_1 + 0x36,(int)*(short *)(param_1 + 0x92),1,DAT_0011bb50,0);
  }
  if (DAT_0011bb64 < sVar1) {
    *(undefined2 *)(param_1 + 0x902) = 0;
    FUN_00373d40(param_1 + 0x1e4,7);
    *(undefined4 *)(param_1 + 0x8ec) = 0xb;
    *(undefined2 *)(param_1 + 0x8f6) = 0;
    *(undefined2 *)(param_1 + 0x8fa) = 8;
    FUN_00375bcc(param_1,DAT_0011bb68);
    *(undefined4 *)(param_1 + 0x8f0) = DAT_0011bb6c;
  }
  return;
}
