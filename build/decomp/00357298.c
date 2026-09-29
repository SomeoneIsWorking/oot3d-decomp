// OoT3D decomp @ 00357298  name=FUN_00357298  size=188

void FUN_00357298(undefined4 param_1,int param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;

  iVar3 = (int)*(short *)(param_2 + 0x1c);
  iVar4 = DAT_00357368 + iVar3 * 0x30;
  if (4 < iVar3 - 0x1eU) {
    *(undefined2 *)(param_2 + 0x116) = *(undefined2 *)(iVar4 + 0xe);
    goto LAB_00357350;
  }
  uVar1 = *(ushort *)(DAT_0035736c + 0xe);
  switch(iVar3) {
  case 0x1e:
    uVar1 = uVar1 & 0x100;
    goto joined_r0x00357328;
  case 0x1f:
    uVar1 = uVar1 & 0x400;
    break;
  case 0x20:
    uVar1 = uVar1 & 0x200;
    break;
  case 0x21:
    goto joined_r0x00357328;
  case 0x22:
joined_r0x00357328:
    uVar1 = uVar1 & 0x800;
joined_r0x00357328:
    if (uVar1 == 0) goto LAB_00357348;
    goto LAB_00357338;
  default:
    goto LAB_00357348;
  }
  if (uVar1 == 0) {
LAB_00357348:
    uVar2 = *(undefined2 *)(iVar4 + 0xe);
  }
  else {
LAB_00357338:
    uVar2 = *(undefined2 *)(DAT_00357370 + (iVar3 + -0x1e) * 2);
  }
  *(undefined2 *)(param_2 + 0x116) = uVar2;
LAB_00357350:
  *(undefined2 *)(param_2 + 0x1bc) = 0;
  *(undefined4 *)(param_2 + 0x140) = DAT_00357374;
  return;
}
