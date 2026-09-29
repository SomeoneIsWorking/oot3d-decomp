// OoT3D decomp @ 0047e4b4  name=FUN_0047e4b4  size=1628

void FUN_0047e4b4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  uint uVar5;

  do {
    if (param_1 == (int *)0x0) {
      return;
    }
    switch(*(undefined1 *)(param_1 + 1)) {
    case 2:
      puVar3 = (undefined1 *)param_1[4];
      goto LAB_0047e5c8;
    case 3:
      (**(code **)(*(int *)param_1[4] + 8))();
      puVar3 = (undefined1 *)param_1[5];
LAB_0047e5c8:
      *puVar3 = 1;
      break;
    case 4:
      pcVar4 = *(code **)(*(int *)param_1[4] + 0xc);
      goto LAB_0047e5ec;
    case 5:
      pcVar4 = *(code **)(*(int *)param_1[4] + 0x10);
LAB_0047e5ec:
      (*pcVar4)();
      break;
    case 6:
      if (*(char *)(param_1 + 5) != '\0') {
        *(undefined4 *)(param_1[4] + 0xc) = DAT_0047e8ec;
      }
      (**(code **)(*(int *)param_1[4] + 0x14))();
      break;
    case 7:
      (**(code **)(*(int *)param_1[4] + 0x18))((int *)param_1[4],(int)*(char *)(param_1 + 5));
      break;
    case 8:
      *(int *)(param_1[4] + 0xc) = param_1[5];
      *(int *)(param_1[4] + 0x10) = param_1[6];
      *(int *)(param_1[4] + 0x14) = param_1[7];
      *(int *)(param_1[4] + 0x18) = param_1[8];
      *(int *)(param_1[4] + 0x1c) = param_1[9];
      FUN_00486bdc(param_1[0xb],param_1[4],param_1[10]);
      uVar5 = 0;
      *(int *)(param_1[4] + 0x28) = param_1[0xc];
      do {
        FUN_00486be8(param_1[uVar5 + 0xd],param_1[4],uVar5 & 0xff);
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < 2);
      break;
    case 9:
      *(undefined1 *)(param_1[4] + 0x2c) = *(undefined1 *)(param_1 + 5);
      break;
    case 10:
      *(undefined1 *)(param_1[4] + 0x2d) = *(undefined1 *)((int)param_1 + 0x15);
      break;
    case 0xb:
      *(undefined1 *)(param_1[4] + 0x26) = *(undefined1 *)(param_1 + 5);
      break;
    case 0xc:
      FUN_0048776c(param_1[4],param_1[5],param_1[6],param_1[7]);
      break;
    case 0xd:
      FUN_004873bc(param_1[4],param_1[5],param_1[6]);
      break;
    case 0xe:
      FUN_004873e8(param_1[4],param_1 + 5,4);
      break;
    case 0xf:
      FUN_0048772c(param_1[4],param_1[5] & 0xff,param_1[6]);
      break;
    case 0x10:
      *(int *)(param_1[4] + 0x5c) = param_1[5];
      break;
    case 0x11:
      *(char *)(param_1[4] + 0x6d) = (char)param_1[5];
      break;
    case 0x12:
      *(undefined1 *)(param_1[4] + 0x54) = *(undefined1 *)(param_1 + 5);
      break;
    case 0x13:
      FUN_00487720(param_1[4],param_1[5],param_1[6]);
      break;
    case 0x14:
      FUN_0048757c(param_1[4],param_1[6],(int)(short)param_1[7]);
      break;
    case 0x15:
      FUN_004875d0(param_1[6],(int)(short)param_1[7]);
      break;
    case 0x16:
      iVar1 = FUN_0030425c(param_1[4],param_1[5]);
      if (iVar1 != 0) {
        FUN_004869a8(iVar1,param_1[6],(int)(short)param_1[7]);
      }
      break;
    case 0x17:
      FUN_00487434(param_1[4],param_1[5],param_1[6] & 0xff);
      break;
    case 0x18:
      FUN_004874f8(param_1[4],param_1[5],(int)*(char *)(param_1 + 6),param_1[7]);
      break;
    case 0x19:
      FUN_004874c8(param_1[6],param_1[4],param_1[5]);
      break;
    case 0x1a:
      FUN_004874b0(param_1[6],param_1[4],param_1[5]);
      break;
    case 0x1b:
      FUN_0048741c(param_1[6],param_1[4],param_1[5]);
      break;
    case 0x1c:
      FUN_00487678(param_1[6],param_1[4],param_1[5]);
      break;
    case 0x1d:
      FUN_004874e0(param_1[6],param_1[4],param_1[5]);
      break;
    case 0x1e:
      FUN_004875b8(param_1[6],param_1[4],param_1[5]);
      break;
    case 0x1f:
      FUN_00487588(param_1[6],param_1[4],param_1[5]);
      break;
    case 0x20:
      FUN_004875a0(param_1[6],param_1[4],param_1[5]);
      break;
    case 0x21:
      FUN_00487690(param_1[7],param_1[4],param_1[5],param_1[6]);
      break;
    case 0x22:
      FUN_004875e4(param_1[4],param_1[5],param_1[6]);
      break;
    case 0x23:
      FUN_00486b68(param_1[4],param_1[5],param_1[6],param_1[7] & 0xff,param_1[8],param_1[9],
                   param_1[10]);
      break;
    case 0x24:
      *(char *)(param_1[4] + 0x5c) = (char)param_1[5];
      break;
    case 0x25:
      *(undefined1 *)(param_1[4] + 0x55) = *(undefined1 *)(param_1 + 5);
      break;
    case 0x26:
      FUN_00487254(param_1[4],param_1[5],param_1[6],*(undefined2 *)(param_1 + 7));
      break;
    case 0x27:
      FUN_00487364(param_1[4],param_1[5],param_1[6] & 0xff,param_1[7]);
      break;
    case 0x29:
      FUN_00486c38(param_1[4],param_1 + 5,param_1 + 0x13,param_1 + 0x18,param_1 + 100,param_1[0x70],
                   param_1[0x71],param_1[0x72]);
      break;
    case 0x2a:
      FUN_004870b4(param_1[4],param_1[5],param_1[6],param_1[7],(int)*(char *)(param_1 + 8),
                   (int)*(char *)((int)param_1 + 0x21));
      break;
    case 0x2b:
      FUN_004871e4(param_1[6],param_1[4],param_1[5]);
      break;
    case 0x2c:
      FUN_0048707c(param_1[6],param_1[4],param_1[5]);
      break;
    case 0x2d:
      FUN_0048721c(param_1[6],param_1[4],param_1[5]);
      break;
    case 0x2e:
      uVar2 = FUN_00309b60();
      FUN_00487848(uVar2,param_1[4],param_1[5]);
      break;
    case 0x2f:
      uVar2 = FUN_00309b60();
      FUN_00308b70(uVar2,param_1[4]);
      break;
    case 0x30:
      uVar2 = FUN_00309b60();
      FUN_0030c9b0(uVar2,param_1[4]);
      break;
    case 0x31:
      if (((*DAT_0047ebe4 & 1) == 0) && (iVar1 = FUN_003679b4(DAT_0047ebe4), iVar1 != 0)) {
        FUN_0030c5b8(DAT_0047ebe8);
      }
      FUN_00486a68(DAT_0047ebe8,*(undefined1 *)(param_1 + 4),param_1[5]);
      break;
    case 0x32:
      if (((*DAT_0047ebe4 & 1) == 0) && (iVar1 = FUN_003679b4(DAT_0047ebe4), iVar1 != 0)) {
        FUN_0030c5b8(DAT_0047ebe8);
      }
      FUN_004869b4(DAT_0047ebe8,*(undefined1 *)(param_1 + 4),param_1[6]);
      break;
    case 0x33:
      uVar2 = FUN_0030c6e0();
      FUN_002d2e84(uVar2,param_1[4]);
    }
    param_1 = (int *)*param_1;
  } while( true );
}
