// OoT3D decomp @ 003a8708  name=FUN_003a8708  size=536

void FUN_003a8708(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint in_fpscr;
  short local_28 [2];
  undefined1 auStack_24 [4];

  uVar1 = DAT_003a8920;
  *(undefined4 *)(param_1 + 0x6c) = DAT_003a8920;
  uVar3 = DAT_003a892c;
  uVar2 = DAT_003a8928;
  if ((DAT_003a8924 < *(int *)(param_1 + 0xe78)) && ((*(uint *)(param_1 + 0xe54) & 0x800) == 0)) {
    *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) | 0x800;
    FUN_0037547c(DAT_003a8930,param_1 + 0x28,4,uVar3,uVar3,uVar2);
  }
  FUN_00326a6c(param_1 + 0xec8,auStack_24,local_28);
  iVar4 = FUN_003731e0(param_1 + 0x1c4);
  if (iVar4 == 0) {
    return;
  }
  iVar5 = FUN_00326b20(param_1,param_2);
  uVar3 = DAT_003a893c;
  uVar2 = DAT_003a8938;
  iVar4 = DAT_003a8934;
  if (iVar5 == 1) {
    uVar6 = *(uint *)(param_1 + 0xe54);
    if ((uVar6 & 0x10) != 0) {
      *(undefined4 *)(param_1 + 0x1a8) = 100;
      *(uint *)(param_1 + 0xe54) = uVar6 & 0xffffffef;
      *(undefined4 *)(param_1 + 0x1ac) = 100;
      *(undefined1 *)(param_1 + 0x1a4) = 0xd;
      *(undefined1 *)(param_1 + 0xe74) = 4;
      *(undefined4 *)(param_1 + 0xe7c) = 0;
      uVar7 = FUN_0036ae14(param_1 + 0x1c4,
                           *(undefined4 *)
                            (*(int *)(iVar4 + (uint)*(byte *)(param_1 + 0x1b0) * 4) + 0x10));
      uVar7 = VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(uVar3,uVar1,uVar7,uVar2,param_1 + 0x1c4,
                   *(undefined4 *)
                    (*(int *)(iVar4 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                    (uint)*(byte *)(param_1 + 0xe74) * 4),0);
      return;
    }
    if ((uVar6 & 0x20) != 0) {
      *(undefined4 *)(param_1 + 0x1a8) = 100;
      *(uint *)(param_1 + 0xe54) = uVar6 & 0xffffffdf;
      *(undefined4 *)(param_1 + 0x1ac) = 100;
      *(undefined1 *)(param_1 + 0x1a4) = 8;
      iVar5 = DAT_003a8940;
      *(undefined4 *)(param_1 + 0xe7c) = 0;
      *(undefined1 *)(param_1 + 0xe74) = 4;
      *(undefined2 *)(iVar5 + param_1) = 0;
      uVar7 = FUN_0036ae14(param_1 + 0x1c4,
                           *(undefined4 *)
                            (*(int *)(iVar4 + (uint)*(byte *)(param_1 + 0x1b0) * 4) + 0x10));
      uVar7 = VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(uVar3,uVar1,uVar7,uVar2,param_1 + 0x1c4,
                   *(undefined4 *)
                    (*(int *)(iVar4 + (uint)*(byte *)(param_1 + 0x1b0) * 4) +
                    (uint)*(byte *)(param_1 + 0xe74) * 4),2);
      return;
    }
    uVar6 = FUN_00338f60((int)local_28[0]);
    if (0xbeffffff < uVar6) {
      FUN_00318814(param_1);
      return;
    }
  }
  FUN_003478b0(uVar1,param_1 + 0x1c4);
  *(undefined4 *)(param_1 + 0xe78) = uVar1;
  FUN_00357d6c(param_1);
  *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) & 0xffffefff;
  return;
}
