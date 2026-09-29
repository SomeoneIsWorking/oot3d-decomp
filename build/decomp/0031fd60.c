// OoT3D decomp @ 0031fd60  name=FUN_0031fd60  size=264

void FUN_0031fd60(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  uint in_fpscr;

  if ((int)*(char *)(DAT_0031fe68 + param_2) - 4U < 4) {
    iVar4 = FUN_0035d260(param_2);
    iVar6 = DAT_0031fe6c;
  }
  else {
    iVar4 = FUN_0035d260(param_2);
    iVar6 = DAT_0031fe70;
  }
  uVar7 = *(undefined4 *)(iVar6 + iVar4 * 4);
  FUN_0034bbfc(param_2);
  uVar2 = DAT_0031fe78;
  uVar1 = DAT_0031fe74;
  uVar5 = FUN_003603c0(param_2 + 0x254,uVar7);
  uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00360190(uVar1,uVar2,uVar5,DAT_0031fe7c,param_2 + 0x254,param_1,uVar7,2);
  *(undefined4 *)(param_2 + 0x2240) = DAT_0031fe80;
  *(uint *)(param_2 + 0x1710) = *(uint *)(param_2 + 0x1710) | 0x1000;
  if (*(char *)(param_2 + 2) == '\x02') {
    uVar3 = FUN_0033100c(param_2);
    z_actor_003738d0(*(undefined4 *)(param_2 + 0x2340),*(undefined4 *)(param_2 + 0x2344),
                     *(undefined4 *)(param_2 + 0x2348),param_1 + 0x208c,param_1,0x57,0,0,0,
                     (int)(short)(uVar3 | 0x200),1);
  }
  return;
}
