// OoT3D decomp @ 002c46dc  name=FUN_002c46dc  size=312

uint FUN_002c46dc(int param_1,undefined4 param_2,int param_3,uint param_4,undefined4 param_5,
                 uint param_6)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;

  piVar2 = (int *)FUN_0030b634(*(undefined4 *)(param_1 + 4),param_2,param_1 + 8,0x200);
  if (piVar2 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar2 + 0x4c))(piVar2);
    if ((iVar3 != 0) && (iVar3 = (**(code **)(*piVar2 + 0xc))(piVar2), iVar3 != 0)) {
      (**(code **)(*piVar2 + 0x40))(piVar2,param_5,0);
      uVar1 = param_4;
      if (param_6 != 0) {
        for (; uVar1 != 0; uVar1 = uVar1 - uVar4) {
          uVar4 = param_6;
          if (uVar1 < param_6) {
            uVar4 = uVar1;
          }
          uVar4 = (**(code **)(*piVar2 + 0x24))(piVar2,param_3,uVar4 + 0x1f & 0xffffffe0);
          if ((int)uVar4 < 0) {
            if (piVar2 == (int *)0x0) {
              return 0xffffffff;
            }
            goto LAB_002c473c;
          }
          if (uVar1 <= uVar4) break;
          param_3 = param_3 + uVar4;
        }
LAB_002c47f4:
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x38))(piVar2);
        }
        return param_4;
      }
      iVar3 = (**(code **)(*piVar2 + 0x24))(piVar2,param_3,param_4 + 0x1f & 0xffffffe0);
      if (-1 < iVar3) goto LAB_002c47f4;
    }
LAB_002c473c:
    (**(code **)(*piVar2 + 0x38))(piVar2);
  }
  return 0xffffffff;
}
