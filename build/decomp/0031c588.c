// OoT3D decomp @ 0031c588  name=FUN_0031c588  size=256

void FUN_0031c588(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;
  undefined4 uVar3;

  *(undefined1 *)(param_3 + 0x1a4) = 3;
  if (((param_4 != 5 && param_4 != 7) && param_4 != 9) && param_4 != 4) {
    param_4 = 4;
  }
  *(uint *)(param_3 + 0xe54) = *(uint *)(param_3 + 0xe54) & 0xffff7fff;
  iVar1 = DAT_0031c690;
  uVar3 = DAT_0031c688;
  if (((param_4 == 5 || param_4 == 7) || param_4 == 9) || param_4 == 4) {
    uVar3 = DAT_0031c68c;
  }
  if (*(byte *)(param_3 + 0xe74) != param_4) {
    *(char *)(param_3 + 0xe74) = (char)param_4;
    uVar2 = FUN_0036ae14(param_3 + 0x1c4,
                         *(undefined4 *)
                          (*(int *)(iVar1 + (uint)*(byte *)(param_3 + 0x1b0) * 4) +
                          (param_4 & 0xff) * 4));
    uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(uVar3,param_2,uVar2,param_1,param_3 + 0x1c4,
                 *(undefined4 *)
                  (*(int *)(iVar1 + (uint)*(byte *)(param_3 + 0x1b0) * 4) +
                  (uint)*(byte *)(param_3 + 0xe74) * 4),2);
    return;
  }
  uVar2 = FUN_0036ae14(param_3 + 0x1c4,
                       *(undefined4 *)
                        (*(int *)(DAT_0031c690 + (uint)*(byte *)(param_3 + 0x1b0) * 4) +
                        (uint)*(byte *)(param_3 + 0xe74) * 4));
  uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(uVar3,param_2,uVar2,DAT_0031c694,param_3 + 0x1c4,
               *(undefined4 *)
                (*(int *)(iVar1 + (uint)*(byte *)(param_3 + 0x1b0) * 4) +
                (uint)*(byte *)(param_3 + 0xe74) * 4),2);
  return;
}
