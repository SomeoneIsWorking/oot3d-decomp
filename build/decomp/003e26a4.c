// OoT3D decomp @ 003e26a4  name=FUN_003e26a4  size=228

void FUN_003e26a4(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;

  FUN_003731e0(param_1 + 0x5b0);
  FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),3,0x400,0x100);
  iVar2 = FUN_003769d8(param_2 + 0x28a0);
  if (iVar2 == 5) {
    FUN_00370350(DAT_003e2788,param_1 + 0x5b0,*(undefined4 *)(DAT_003e278c + 0x1c));
    *(undefined4 *)(param_1 + 0x6c) = DAT_003e2790;
    *(undefined2 *)(param_1 + 0x1a8) = 0x96;
    uVar1 = DAT_003e2794;
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
    *(byte *)(param_1 + 0x1c2) = *(byte *)(param_1 + 0x1c2) & 0xfe;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
    FUN_00375bcc(param_1,uVar1);
    z_actor_003738d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                     *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_2,0x15,0,0,0,3,1);
    *(undefined4 *)(param_1 + 0x1a4) = DAT_003e2798;
  }
  return;
}
