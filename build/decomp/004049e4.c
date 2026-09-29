// OoT3D decomp @ 004049e4  name=FUN_004049e4  size=152

void FUN_004049e4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uStack_28;

  uStack_28 = param_4;
  FUN_0030af40(&uStack_28,param_1 + 0x2c);
  uVar4 = 0;
  do {
    iVar3 = param_1 + (uVar4 & 0xff) * 0xc;
    piVar2 = (int *)*(int *)(iVar3 + 4);
    while (piVar1 = piVar2, piVar1 != (int *)(iVar3 + 4)) {
      piVar2 = (int *)*piVar1;
      if (piVar1[4] == param_2) {
        FUN_0030c964(iVar3,piVar1);
        *(undefined1 *)(piVar1 + 3) = 4;
        FUN_00310148(piVar1 + 2);
      }
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 3);
  FUN_0030aedc(&uStack_28);
  return;
}
