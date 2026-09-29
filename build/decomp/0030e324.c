// OoT3D decomp @ 0030e324  name=FUN_0030e324  size=132

void FUN_0030e324(int param_1)

{
  uint uVar1;
  uint uVar2;

  uVar1 = *(uint *)(param_1 + 0x14);
  if (uVar1 != 0) {
    if (*(int *)(param_1 + 8) != 0) {
      if (*(char *)(param_1 + 0x18) == '\0') {
        *(undefined4 *)(param_1 + 8) = 0;
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
      else {
        software_interrupt(0x20);
        uVar2 = uVar1 >> 0x1b;
        if ((uVar1 & 0x80000000) != 0) {
          uVar2 = uVar2 - 0x20;
        }
        if ((uVar2 != 0xfffffff9 && uVar2 != 0) && uVar2 != 1) {
          FUN_003351b4();
        }
        FUN_0030e404(DAT_0030e3a8,param_1);
        if (*(int *)(param_1 + 0x14) == 0) {
          return;
        }
      }
    }
    software_interrupt(0x23);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}
