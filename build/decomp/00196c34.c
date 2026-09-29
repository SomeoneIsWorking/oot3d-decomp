// OoT3D decomp @ 00196c34  name=FUN_00196c34  size=212

void FUN_00196c34(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;

  uVar1 = DAT_00196d0c;
  *(float *)(param_1 + 100) = *(float *)(param_1 + 100) + DAT_00196d08;
  iVar2 = FUN_003705a0(uVar1,param_1 + 0x2c);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 100) = DAT_00196d10;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffdf;
    *(char *)(param_2 + 0x7fc7) = *(char *)(param_2 + 0x7fc7) + '\x01';
    if (*(char *)(param_1 + 0x1c0) == '\x01') {
      FUN_00375bcc(param_1,DAT_00196d14);
      FUN_0036fca8(param_1,param_2,5);
      FUN_0035239c((int)*(short *)(param_1 + 0x1c4));
      if (*(int *)(param_2 + 0x7fcc) == 0) {
        *(undefined4 *)(param_2 + 0x7fcc) = 1;
      }
      else {
        FUN_0036e980(param_2,*(undefined4 *)(DAT_00196d18 + param_2),7);
      }
    }
    else {
      FUN_00346850(param_1);
    }
    *(undefined1 *)(param_1 + 0x1c2) = 0;
    *(undefined4 *)(param_1 + 0x1bc) = DAT_00196d1c;
  }
  return;
}
