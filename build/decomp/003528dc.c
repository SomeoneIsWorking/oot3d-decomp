// OoT3D decomp @ 003528dc  name=FUN_003528dc  size=200

void FUN_003528dc(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;

  switch(**(undefined2 **)(param_2 + 0x22f8)) {
  case 1:
    FUN_0035ff0c(param_1,DAT_003529c8,DAT_003529c4,param_1 + 0x1fc,param_1 + 0xaa0,3);
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x140) = DAT_003529c0;
    uVar2 = 0;
    uVar1 = DAT_003529cc;
    goto LAB_00352984;
  case 3:
    *(undefined4 *)(param_1 + 0x140) = DAT_003529c0;
    uVar2 = 3;
    uVar1 = DAT_003529d0;
LAB_00352984:
    FUN_0035ff0c(param_1,uVar1,DAT_003529c4,param_1 + 0x1fc,param_1 + 0xaa0,uVar2);
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(undefined4 *)(param_1 + 0x1370) = DAT_003529cc;
    break;
  case 5:
    FUN_00374428(DAT_003529bc);
  }
  *(char *)(param_1 + 0x136c) = (char)**(undefined2 **)(param_2 + 0x22f8);
  return;
}
