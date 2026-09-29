// OoT3D decomp @ 0047edf4  name=FUN_0047edf4  size=260

undefined4
FUN_0047edf4(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 local_38;
  int local_34 [5];
  undefined1 local_20;
  undefined1 local_1f;

  if ((param_4 & 1) != 0) {
    uVar1 = FUN_0048be78(*(undefined4 *)(param_1 + 4),param_2);
    iVar2 = FUN_0030a884(param_1,uVar1,param_3,param_5,0);
    if (iVar2 == 0) {
      return 0;
    }
  }
  if ((param_4 & 0xc) != 0) {
    local_38 = 0;
    local_20 = 0;
    local_34[4] = 0;
    local_1f = 0;
    puVar3 = &local_38;
    iVar2 = 2;
    do {
      puVar3[1] = 0xffffffff;
      iVar2 = iVar2 + -1;
      puVar3 = puVar3 + 2;
      *puVar3 = 0xffffffff;
    } while (iVar2 != 0);
    iVar2 = FUN_0048c0b4(*(undefined4 *)(param_1 + 4),param_2,&local_38);
    if (iVar2 == 0) {
      return 0;
    }
    uVar4 = 0;
    do {
      if ((local_34[uVar4] != -1) &&
         (iVar2 = FUN_002d304c(param_1,local_34[uVar4],param_3,param_4,param_5), iVar2 == 0)) {
        return 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 4);
  }
  return 1;
}
