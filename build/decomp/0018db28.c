// OoT3D decomp @ 0018db28  name=FUN_0018db28  size=768

void FUN_0018db28(int param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;

  FUN_003510b0(param_1,DAT_0018de40);
  uVar4 = DAT_0018de4c;
  FUN_00372d4c(DAT_0018de4c,DAT_0018de44,param_1 + 0xbc,DAT_0018de48);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1fc,1,3,param_1 + 0x280,param_1 + 0x690,0x14);
  FUN_0035c358(param_1 + 0xaa0,param_1 + 0x1fc,0,0xffffffff,0xffffffff);
  iVar5 = param_1 + 0xc6c;
  FUN_00353c9c(param_1,param_2,iVar5,0,0,param_1 + 0xcf0,param_1 + 0xf2c,0xb);
  FUN_0035c358(param_1 + 0x1168,iVar5,1,0xffffffff,0xffffffff);
  FUN_00353dd0(param_2,param_1 + 0x1a4);
  FUN_00353d24(param_2,param_1 + 0x1a4,param_1,DAT_0018de50);
  uVar2 = DAT_0018de54;
  *(undefined1 *)(param_1 + 0xb6) = 0xff;
  *(undefined4 *)(param_1 + 0x74) = uVar2;
  *(undefined4 *)(param_1 + 0x50) = DAT_0018de58;
  FUN_0035ff0c(uVar4,param_1,DAT_0018de60,DAT_0018de5c,iVar5,param_1 + 0x1168,0);
  *(undefined2 *)(param_1 + 0x136a) = 0;
  *(undefined2 *)(param_1 + 0x1366) = 0;
  *(undefined2 *)(param_1 + 0x135c) = 0;
  *(undefined1 *)(param_1 + 0x1365) = 4;
  *(undefined1 *)(param_1 + 0x1368) = 0;
  *(undefined1 *)(param_1 + 0x1364) = 0;
  *(undefined1 *)(param_1 + 0x1369) = 4;
  uVar3 = (uint)*(short *)(param_1 + 0x1c);
  uVar6 = (uVar3 & 0xfc0) >> 6;
  if (uVar3 == 0xfff) {
    uVar6 = 1;
  }
  else if ((uVar6 != 0 && (uVar3 & 0x3f) < 0x20) && (iVar5 = FUN_0036e864(param_2), iVar5 != 0))
  goto LAB_0018de2c;
  *(uint *)(param_1 + 0x1378) = uVar6;
  *(undefined2 *)(param_1 + 0x134e) = 0;
  *(undefined2 *)(param_1 + 0x1360) = *(undefined2 *)(param_1 + 0x36);
  uVar4 = DAT_0018de64;
  switch(uVar6) {
  case 0:
    *(undefined4 *)(param_1 + 0x1370) = DAT_0018de60;
    *(undefined1 *)(param_1 + 0x136c) = 0;
    *(undefined4 *)(param_1 + 0xfc) = uVar4;
    return;
  case 1:
    *(undefined4 *)(param_1 + 0x1370) = DAT_0018de68;
    return;
  case 2:
    *(ushort *)(param_1 + 0x135c) = *(ushort *)(param_1 + 0x135c) | 2;
    *(undefined2 *)(param_1 + 0x134e) = 0x20;
    uVar4 = DAT_0018de6c;
    break;
  case 3:
    uVar1 = *(ushort *)(DAT_0018de70 + 0xf4) & 1;
    uVar4 = DAT_0018de74;
    goto joined_r0x0018dd88;
  case 4:
    uVar1 = *(ushort *)(DAT_0018de70 + 0xf4) & 8;
    uVar4 = DAT_0018de78;
joined_r0x0018dd88:
    if (uVar1 != 0) {
LAB_0018de2c:
      FUN_00374428(param_1);
      return;
    }
    break;
  case 5:
    uVar4 = DAT_0018de7c;
    break;
  case 6:
    if (((*(ushort *)(DAT_0018de70 + 0xf2) & 0x200) == 0) &&
       (uVar4 = DAT_0018de80, (*(ushort *)(DAT_0018de70 + 0xf4) & 1) != 0)) break;
    goto LAB_0018de2c;
  case 7:
    *(undefined4 *)(param_1 + 0x1370) = DAT_0018de84;
    FUN_0036beac(param_2,0x23);
    return;
  case 8:
  case 9:
    uVar4 = DAT_0018de88;
    break;
  case 10:
    uVar4 = DAT_0018de8c;
    break;
  case 0xb:
    uVar6 = *(uint *)(DAT_0018de90 + 0xbc) & *(uint *)(DAT_0018de94 + 0x30);
    uVar4 = DAT_0018de98;
    goto joined_r0x0018de24;
  case 0xc:
    uVar6 = *(uint *)(DAT_0018de90 + 0xbc) & *(uint *)(DAT_0018de94 + 0x38);
    uVar4 = DAT_0018de9c;
joined_r0x0018de24:
    if (uVar6 != 0) break;
    goto LAB_0018de2c;
  default:
    *(ushort *)(param_1 + 0x135c) = *(ushort *)(param_1 + 0x135c) | 2;
    *(undefined2 *)(param_1 + 0x134e) = 0x20;
    uVar4 = DAT_0018de68;
  }
  *(undefined4 *)(param_1 + 0x1370) = uVar4;
  return;
}
