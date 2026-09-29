// OoT3D decomp @ 0022aa88  name=FUN_0022aa88  size=84

void FUN_0022aa88(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  char cVar3;

  sVar1 = *(short *)(param_1 + 0x1c);
  cVar3 = FUN_00363c10(param_2 + 0x3a58,(int)*(short *)(DAT_0022aadc + sVar1 * 0x30));
  *(char *)(param_1 + 0x1a8) = cVar3;
  uVar2 = DAT_0022aae0;
  if (-1 < cVar3) {
    *(short *)(param_1 + 0x1c) = sVar1;
    *(undefined4 *)(param_1 + 0x1ac) = uVar2;
    return;
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  return;
}
