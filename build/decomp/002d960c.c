// OoT3D decomp @ 002d960c  name=FUN_002d960c  size=88

void FUN_002d960c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;

  uVar2 = 0;
  if (*(char *)(param_1 + 6) != '\0') {
    do {
      if (*(int *)(param_1 + uVar2 * 0x3c + 0xc) != 0) {
        uVar1 = FUN_003687a8();
        FUN_00368704(param_2,uVar1);
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < *(byte *)(param_1 + 6));
  }
  return;
}
