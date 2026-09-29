// OoT3D decomp @ 002fa904  name=FUN_002fa904  size=240

undefined4
FUN_002fa904(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,uint param_6,uint param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  undefined1 auStack_5c [16];
  int local_4c;
  undefined1 auStack_40 [16];
  undefined4 local_30;

  iVar1 = FUN_00485f24();
  if (iVar1 != 0) {
    if (param_7 != 0) {
      uVar2 = FUN_0030197c();
      iVar1 = FUN_0030196c();
      bVar6 = param_6 <= uVar2;
      bVar5 = uVar2 == param_6;
      if (!bVar6 || bVar5) {
        bVar6 = iVar1 + uVar2 <= param_6 + param_7;
        bVar5 = param_6 + param_7 == iVar1 + uVar2;
      }
      if (bVar6 && !bVar5) {
        return 0;
      }
    }
    iVar1 = FUN_00485fdc(param_1,param_2,param_4,param_5);
    if (iVar1 != 0) {
      iVar3 = FUN_0048c138(param_2,auStack_5c);
      iVar1 = 0;
      if (iVar3 != 0) {
        iVar1 = local_4c;
      }
      if ((uint)(iVar1 * 0xa000) < param_7 || iVar1 * 0xa000 - param_7 == 0) {
        iVar1 = FUN_0048c138(param_2,auStack_40);
        uVar4 = 0;
        if (iVar1 != 0) {
          uVar4 = local_30;
        }
        FUN_00486bf4(param_1 + 0x80,param_6,param_7,uVar4);
        *(int *)(param_1 + 0x70) = param_1 + 0x74;
        *(undefined4 *)(param_1 + 0xa4) = param_3;
        return 1;
      }
    }
  }
  return 0;
}
