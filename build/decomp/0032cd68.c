// OoT3D decomp @ 0032cd68  name=FUN_0032cd68  size=352

void FUN_0032cd68(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  uint in_fpscr;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;

  if (*(short *)(param_2 + 0x104) == 0x61) {
    puVar3 = (ushort *)0x0;
    iVar1 = FUN_0037571c(param_2);
    iVar2 = DAT_0032cec8;
    if (iVar1 != 0) {
      puVar3 = *(ushort **)(&DAT_000022dc + param_2);
    }
    if (puVar3 != (ushort *)0x0) {
      uVar4 = (uint)*puVar3;
      if (*(uint *)(DAT_0032cec8 + 0x14) != uVar4) {
        if (uVar4 == 1) {
          if (*(int *)(param_1 + 0xc74) != 0) {
            FUN_00374428();
            *(undefined4 *)(param_1 + 0xc74) = 0;
          }
          FUN_00374428(param_1);
        }
        else if (*(int *)(DAT_0032cec8 + 0x10) == 0) {
          iVar5 = 0;
          iVar1 = FUN_0037571c(param_2);
          if (iVar1 != 0) {
            iVar5 = *(int *)(&DAT_000022dc + param_2);
          }
          uVar6 = VectorSignedToFloat(*(undefined4 *)(iVar5 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
          uVar7 = VectorSignedToFloat(*(undefined4 *)(iVar5 + 0x10),(byte)(in_fpscr >> 0x15) & 3);
          uVar8 = VectorSignedToFloat(*(undefined4 *)(iVar5 + 0x14),(byte)(in_fpscr >> 0x15) & 3);
          uVar6 = z_actor_003738d0(uVar6,uVar7,uVar8,param_2 + 0x208c,param_2,8,0,0,0,5,1);
          *(undefined4 *)(param_1 + 0xc74) = uVar6;
          *(undefined4 *)(iVar2 + 0x10) = 1;
        }
        *(uint *)(iVar2 + 0x14) = uVar4;
      }
      iVar5 = 0;
      iVar2 = FUN_0037571c(param_2);
      iVar1 = *(int *)(param_1 + 0xc74);
      if (iVar2 != 0) {
        iVar5 = *(int *)(&DAT_000022dc + param_2);
      }
      if (iVar1 != 0) {
        uVar6 = VectorSignedToFloat(*(undefined4 *)(iVar5 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
        *(undefined4 *)(iVar1 + 0x28) = uVar6;
        uVar6 = VectorSignedToFloat(*(undefined4 *)(iVar5 + 0x10),(byte)(in_fpscr >> 0x15) & 3);
        *(undefined4 *)(iVar1 + 0x2c) = uVar6;
        uVar6 = VectorSignedToFloat(*(undefined4 *)(iVar5 + 0x14),(byte)(in_fpscr >> 0x15) & 3);
        *(undefined4 *)(iVar1 + 0x30) = uVar6;
      }
    }
  }
  return;
}
