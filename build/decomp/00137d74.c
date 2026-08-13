// OoT3D decomp @ 00137d74  name=FUN_00137d74  size=288

void FUN_00137d74(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;

  iVar3 = *(int *)(param_1 + 0x124);
  FUN_003731e0(param_1 + 0x1a4);
  *(undefined1 *)(param_1 + 0x2b4) = 1;
  uVar1 = uRam00137e94;
  if (*(short *)(param_1 + 0x2b8) == 0) {
    iVar3 = FUN_003736fc(*(undefined4 *)(param_1 + 0x310),uRam00137e94,param_1 + 0x1a4);
    if (iVar3 != 0) {
      FUN_00373d40(param_1 + 0x1a4,6);
      uVar1 = FUN_0036ae14(param_1 + 0x1a4,6);
      uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0x310) = uVar1;
      *(undefined2 *)(param_1 + 0x2b8) = 1;
    }
  }
  else {
    if (*(short *)(param_1 + 0x2b8) != 1) {
      func_0x00373500(uRam00137eac,uRam00137e94,uRam00137ea8,param_1 + 0x2c);
      if (*(short *)(param_1 + 0x2dc) == 0) {
        *(undefined4 *)(param_1 + 0x2b0) = uRam00137eb0;
        *(undefined1 *)(iVar3 + 0x940) = 1;
      }
      return;
    }
    iVar2 = FUN_003736fc(uRam00137e98,uRam00137e94,param_1 + 0x1a4);
    if (iVar2 != 0) {
      func_0x00375bcc(param_1,uRam00137e9c);
    }
    iVar2 = FUN_003736fc(uRam00137ea0,uVar1,param_1 + 0x1a4);
    if (iVar2 != 0) {
      *(undefined2 *)(iRam00137ea4 + iVar3) = 0x2d;
    }
    iVar3 = FUN_003736fc(*(undefined4 *)(param_1 + 0x310),uVar1,param_1 + 0x1a4);
    if (iVar3 != 0) {
      *(undefined2 *)(param_1 + 0x2b8) = 2;
      *(undefined2 *)(param_1 + 0x2dc) = 0x26;
      return;
    }
  }
  return;
}
