// OoT3D decomp @ 001a61c4  name=FUN_001a61c4  size=84

void FUN_001a61c4(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;

  FUN_003510b0(param_1,DAT_001a6218);
  if (*(short *)(param_1 + 0x1c) == 0) {
    uVar2 = 0x68;
  }
  else {
    uVar2 = 0x61;
  }
  cVar1 = FUN_00363c10(param_2 + 0x3a58,uVar2);
  *(char *)(param_1 + 0x1bc) = cVar1;
  if (-1 < cVar1) {
    *(undefined4 *)(param_1 + 0x1c0) = DAT_001a621c;
    return;
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  return;
}
