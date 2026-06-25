// OoT3D decomp @ 0036b0fc  name=FUN_0036b0fc  size=212

void FUN_0036b0fc(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_2 + 0x1710);
  if (((uVar3 & 0x800) != 0) && (*(int *)(param_2 + 0x1224) == 0)) {
    if (*(int *)(param_2 + 0x12b0) == 0) {
      *(uint *)(param_2 + 0x1710) = uVar3 & 0xfffff7ff;
    }
    else if (*(char *)(DAT_0036b1d0 + param_2) == '\0') {
      *(uint *)(param_2 + 0x1710) = uVar3 & 0xfffff7ff;
      *(undefined4 *)(param_2 + 0x12b0) = 0;
    }
  }
  FUN_0034bbfc(param_2);
  iVar2 = DAT_0036b1d8;
  uVar1 = DAT_0036b1d4;
  *(undefined *)(param_2 + 0x1749) = 0;
  *(undefined4 *)(iVar2 + 0xcc) = uVar1;
  *(undefined *)(iVar2 + 0xd4) = 0;
  FUN_00355264(param_1,param_2);
  FUN_0036c5bc(param_1,0);
  FUN_0036ae48();
  uVar1 = DAT_0036b1dc;
  *(uint *)(param_2 + 0x1710) = *(uint *)(param_2 + 0x1710) & 0xffcf9fff;
  *(uint *)(param_2 + 0x1714) = *(uint *)(param_2 + 0x1714) & 0xfffbff6f;
  *(undefined4 *)(param_2 + 0xc4) = uVar1;
  *(undefined *)(param_2 + 0x2228) = 0;
  *(undefined *)(param_2 + 0x2229) = 0;
  *(undefined2 *)(param_2 + 0xbc) = 0;
  return;
}

