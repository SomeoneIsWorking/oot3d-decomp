// OoT3D decomp @ 002d9560  name=FUN_002d9560  size=152

void FUN_002d9560(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;

  if (*(int *)(param_2 + 0x3cc) != 0) {
    if (((*DAT_002d95f8 & 1) == 0) && (iVar2 = FUN_003679b4(DAT_002d95f8), iVar2 != 0)) {
      FUN_0036788c(DAT_002d95fc);
    }
    uVar1 = DAT_002d9608;
    uVar3 = 0;
    if (*(char *)(param_2 + 6) != '\0') {
      do {
        iVar2 = *(int *)(param_2 + uVar3 * 0x3c + 0xc);
        if (iVar2 != 0) {
          FUN_00330b98(uVar1,iVar2,0);
        }
        uVar3 = uVar3 + 1 & 0xff;
      } while (uVar3 < *(byte *)(param_2 + 6));
    }
  }
  return;
}
