// OoT3D decomp @ 00402bac  name=FUN_00402bac  size=176

void FUN_00402bac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 local_20;

  pcVar1 = DAT_00402c5c;
  if (*(char *)(param_1 + 0x82) == '\0') {
    iVar5 = 0;
    local_20 = param_4;
    do {
      iVar2 = param_1 + iVar5 * 0x10;
      piVar3 = (int *)(iVar2 + 0xc);
      piVar4 = (int *)*piVar3;
      if (piVar4 != piVar3) {
        do {
          piVar3 = (int *)*piVar4;
          local_20 = 0;
          FUN_0030f0fc(&local_20,piVar4 + -0x3b);
          (*pcVar1)(&local_20);
          FUN_00313bdc(&local_20);
          piVar4 = piVar3;
        } while (piVar3 != (int *)(iVar2 + 0xc));
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
    FUN_00402644(param_1);
    *(undefined1 *)(param_1 + 0x82) = 1;
    *(undefined1 *)(param_1 + 0x81) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  return;
}
