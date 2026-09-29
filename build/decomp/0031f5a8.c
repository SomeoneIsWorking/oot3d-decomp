// OoT3D decomp @ 0031f5a8  name=FUN_0031f5a8  size=340

void FUN_0031f5a8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,undefined4 param_6,undefined4 param_7,int param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  short sVar3;
  undefined4 *puVar4;

  uVar2 = DAT_0031f92c;
  uVar1 = DAT_0031f928;
  while( true ) {
    if (param_5 < 1) {
      return;
    }
    if (param_8 == 0) break;
    FUN_003738a8(param_1);
    FUN_003738a8(param_2);
    FUN_003738a8(param_1);
    sVar3 = 0;
    puVar4 = DAT_0031f944;
    do {
      if (*(char *)(puVar4 + 9) == '\0') {
        *(undefined1 *)(puVar4 + 9) = 1;
        puVar4[0x15] = param_4;
        *puVar4 = uVar1;
        puVar4[1] = uVar2;
        puVar4[2] = uVar1;
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
      sVar3 = sVar3 + 1;
      puVar4 = puVar4 + 0x17;
    } while (sVar3 < 200);
    param_5 = param_5 + -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
