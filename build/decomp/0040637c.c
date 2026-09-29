// OoT3D decomp @ 0040637c  name=FUN_0040637c  size=88

void FUN_0040637c(char *param_1)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;

  if (*param_1 != '\0') {
    uVar2 = 0;
    do {
      FUN_00309d80(param_1,uVar2 & 0xff);
      FUN_00309d64((int)(char)uVar2,*(undefined4 *)(param_1 + uVar2 * 4 + 0x7c),
                   *(undefined4 *)(param_1 + uVar2 * 4 + 0x284));
      uVar3 = uVar2 + 1;
      pcVar1 = param_1 + uVar2 * 4 + 0x7c;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1 = param_1 + uVar2 * 4 + 0x284;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      uVar2 = uVar3;
    } while ((int)uVar3 < 2);
    *param_1 = '\0';
  }
  return;
}
